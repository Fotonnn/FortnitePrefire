import interception
import cv2
import numpy as np
import time
import dxcam
import threading
import keyboard as kb


low_green = np.array([43, 161, 164])
high_green = np.array([63, 181, 244])
#[ 43 161 164] [ 63 181 244]
low_orange = np.array([9, 178, 181])
high_orange = np.array([29, 198, 261])

# Tamanho da tela
largura_da_tela = 1920  # Substitua pelo valor correto da largura da sua tela
altura_da_tela = 1080  # Substitua pelo valor correto da altura da sua tela

# Calculando as coordenadas do quadrado no centro da tela
largura_quadrado = 900
altura_quadrado = 700

# Calculando as coordenadas do quadrado no centro da tela
left = (largura_da_tela - largura_quadrado) // 2
top = (altura_da_tela - altura_quadrado) // 2
right = left + largura_quadrado
bottom = top + altura_quadrado

camera = dxcam.create()
is_cam_on = False

def monitor_tecla():
    global is_cam_on
    while True:
        if kb.is_pressed("F2"):
            if not is_cam_on:
                camera.start(region=(left, top, right, bottom), target_fps=120)
                is_cam_on = True
        elif is_cam_on:
            camera.stop()
            is_cam_on = False
        time.sleep(0.1)

tecla_thread = threading.Thread(target=monitor_tecla)
tecla_thread.daemon = True
tecla_thread.start()

while True:
    if is_cam_on:
        image = camera.get_latest_frame()  
        img = cv2.cvtColor(np.array(image), cv2.COLOR_RGB2BGR)
        hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

        orange_mask = cv2.inRange(hsv, low_orange, high_orange)
        orange_pixels = cv2.countNonZero(orange_mask)

        green_mask = cv2.inRange(hsv, low_green, high_green)
        green_pixels = cv2.countNonZero(green_mask)

        if green_pixels < 300 and orange_pixels < 300:
            interception.click()
        time.sleep(0.05)
    else:
        time.sleep(2)