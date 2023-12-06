import interception
import cv2
import numpy as np
import time
import dxcam
import threading
import keyboard as kb

interception.auto_capture_devices(keyboard=True, mouse=True)

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

def monitor_tecla(tecla_ativacao):
    global is_cam_on
    while True:
        if kb.is_pressed(tecla_ativacao):
            if not is_cam_on:
                camera.start(region=(left, top, right, bottom), target_fps=30)
                is_cam_on = True
        elif is_cam_on:
            camera.stop()
            is_cam_on = False
        time.sleep(0.1)

print("Pressione a tecla desejada para ativar a câmeraa:")
tecla_escolhida = kb.read_event(suppress=True).name
print("Tecla escolhida! Tecla: ", tecla_escolhida)
tecla_thread = threading.Thread(target=monitor_tecla, args=(tecla_escolhida,))
tecla_thread.daemon = True
tecla_thread.start()

while True:
    if is_cam_on:
        image = camera.get_latest_frame()  
        img = cv2.cvtColor(np.array(image), cv2.COLOR_RGB2BGR)
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

        combined_mask = cv2.inRange(hsv, low_green, high_green) + cv2.inRange(hsv, low_orange, high_orange)
        combined_pixels = cv2.countNonZero(combined_mask)

        if combined_pixels < 300:
            interception.click()
        time.sleep(0.05)
    else:
        time.sleep(2)