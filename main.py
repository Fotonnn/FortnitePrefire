import interception
import cv2
import numpy as np
import time
import dxcam
import threading
import keyboard as kb
from utils import *

class Progam:
    def main(self, bind):
        low_green = np.array([43, 161, 164])
        high_green = np.array([63, 181, 244])
        low_orange = np.array([9, 178, 181])
        high_orange = np.array([29, 198, 261])

        left = 538
        top = 301
        right = 1326
        bottom = 739

        self.camera = dxcam.create()
        self.is_cam_on = False

        def monitor_tecla(tecla_ativacao):
            while True:
                if is_pressed(tecla_ativacao):
                    if not self.is_cam_on:
                        self.camera.start(region=(left, top, right, bottom), target_fps=30)
                        self.is_cam_on = True
                elif self.is_cam_on:
                    self.camera.stop()
                    self.is_cam_on = False
                time.sleep(0.1)

        tecla_escolhida = bind
        tecla_thread = threading.Thread(target=monitor_tecla, args=(tecla_escolhida,))
        tecla_thread.daemon = True
        tecla_thread.start()

        while True:
            if self.is_cam_on:
                image = self.camera.get_latest_frame()  
                img = cv2.cvtColor(np.array(image), cv2.COLOR_RGB2BGR)
                hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

                combined_mask = cv2.inRange(hsv, low_green, high_green) + cv2.inRange(hsv, low_orange, high_orange)
                combined_pixels = cv2.countNonZero(combined_mask)

                if combined_pixels > 300:
                    new_image = self.camera.get_latest_frame()
                    img2 = cv2.cvtColor(np.array(new_image), cv2.COLOR_RGB2BGR)
                    hsv2 = cv2.cvtColor(img2, cv2.COLOR_BGR2HSV)

                    combined_mask2 = cv2.inRange(hsv2, low_green, high_green) + cv2.inRange(hsv2, low_orange, high_orange)
                    combined_pixels2 = cv2.countNonZero(combined_mask2)
                    if combined_pixels2 != combined_pixels:
                        interception.click()
                        interception.key_down("q")
                        interception.click()
                time.sleep(0)
            else:
                time.sleep(1)
    main()