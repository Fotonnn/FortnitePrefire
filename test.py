import cv2
import numpy as np
import time
import dxcam
import threading
import tkinter as tk
from tkinter import messagebox
import interception
import keyboard as kb

low_green = np.array([43, 161, 164])
high_green = np.array([63, 181, 244])
low_orange = np.array([9, 178, 181])
high_orange = np.array([29, 198, 261])

left = 538
top = 301
right = 1326
bottom = 739

camera = dxcam.create()
is_cam_on = False
is_detection_enabled = False
activation_key = None

def set_activation_key():
    global activation_key
    activation_key = kb.read_event(suppress=True).name
    messagebox.showinfo("Activation Key", f"Activation key set to: {activation_key}")

def toggle_camera():
    global is_cam_on
    if not is_cam_on:
        camera.start(region=(left, top, right, bottom), target_fps=30)
        is_cam_on = True
    else:
        camera.stop()
        is_cam_on = False

def toggle_detection():
    global is_detection_enabled
    is_detection_enabled = not is_detection_enabled
    if is_detection_enabled:
        messagebox.showinfo("Detection", "Detection Enabled")
    else:
        messagebox.showinfo("Detection", "Detection Disabled")

def monitor_detection():
    while True:
        if is_detection_enabled and is_cam_on:
            image = camera.get_latest_frame()  
            img = cv2.cvtColor(np.array(image), cv2.COLOR_RGB2BGR)
            hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

            combined_mask = cv2.inRange(hsv, low_green, high_green) + cv2.inRange(hsv, low_orange, high_orange)
            combined_pixels = cv2.countNonZero(combined_mask)

            if combined_pixels < 300:
                interception.click()
                interception.key_down("q")
                interception.click()
            time.sleep(0.05)
        else:
            time.sleep(2)

def monitor_activation_key():
    global is_cam_on
    while True:
        if kb.is_pressed(activation_key):
            toggle_camera()
            time.sleep(0.5)  # Adjust this delay as needed to prevent rapid toggling
        time.sleep(0.1)

# Interface
root = tk.Tk()
root.title("Color Detection Program")

btn_set_key = tk.Button(root, text="Set Activation Key", command=set_activation_key)
btn_set_key.pack()

checkbox_detection = tk.Checkbutton(root, text="Enable Detection", command=toggle_detection)
checkbox_detection.pack()

# Start detection and activation key monitoring in separate threads
detection_thread = threading.Thread(target=monitor_detection)
detection_thread.daemon = True
detection_thread.start()

activation_key_thread = threading.Thread(target=monitor_activation_key)
activation_key_thread.daemon = True
activation_key_thread.start()

root.mainloop()
