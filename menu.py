import customtkinter
import tkinterDnD
import keyboard as kb
import interception
import cv2
import numpy as np
import time
import dxcam
import threading
import keyboard as kb

class Menu:
    tecla_escolhida = None

    def execApp():
        customtkinter.set_ctk_parent_class(tkinterDnD.Tk)
        customtkinter.set_appearance_mode("dark")
        customtkinter.set_default_color_theme("green")

        app = customtkinter.CTk()
        app.title("Prefire Script")
        app.geometry("280x80")
        app.wm_iconbitmap('icon.ico')

        def checkbox_event():
            print("checkbox toggled, current value:", check_var.get())

        def button_callback():
            def key_pressed(event):
                Menu.tecla_escolhida = event.name
                button_1.configure(text=f"Bind selecionada: {Menu.tecla_escolhida}")
                kb.unhook_all()

            kb.hook(key_pressed)


        frame_1 = customtkinter.CTkFrame(master=app)
        frame_1.pack(pady=0, padx=0, fill="both", expand=False)

        checkbox_1 = customtkinter.CTkCheckBox(master=frame_1, text="Ativar Prefire", command=checkbox_event)
        checkbox_1.pack(pady=10, padx=10)

        button_1 = customtkinter.CTkButton(master=frame_1, command=button_callback, text="Selecionar Bind")
        button_1.pack(pady=10, padx=10)

        app.mainloop()
