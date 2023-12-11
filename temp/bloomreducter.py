import interception
import cv2
import numpy as np
import time
import dxcam
import threading
import keyboard as kb

# Captura automática dos dispositivos de teclado e mouse
interception.auto_capture_devices(keyboard=True, mouse=True)

is_cam_on = False

def monitor_tecla(tecla_ativacao):
    global is_cam_on
    while True:
        if kb.is_pressed(tecla_ativacao):
            if not is_cam_on:
                is_cam_on = True
        elif is_cam_on:
            is_cam_on = False
        time.sleep(0.1)

print("Pressione a tecla desejada para ativar o bloom reducer:")
tecla_escolhida = kb.read_event(suppress=True).name
print("Tecla escolhida! Tecla: ", tecla_escolhida)
tecla_thread = threading.Thread(target=monitor_tecla, args=(tecla_escolhida,))
tecla_thread.daemon = True
tecla_thread.start()

while True:
    if is_cam_on:
        interception.click()
        time.sleep(0.1)
    else:
        time.sleep(0.2)