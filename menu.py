import customtkinter
import tkinter
import keyboard as kb
from main import *

class Menu:
    tecla_escolhida = None

    def main(self):
        #customtkinter.set_ctk_parent_class(tkinterDnD.Tk)
        customtkinter.set_appearance_mode("dark")
        customtkinter.set_default_color_theme("green")

        app = customtkinter.CTk()
        app.title("Prefire Script")
        app.geometry("400x300")
        app.wm_iconbitmap('icon.ico')
        
        self.bind = "F2"

        self.Switch_var = customtkinter.BooleanVar()
        def switch_event():
            is_on =  self.Switch_var.get()
            if is_on:
                execute_program()

        def execute_program():
            progam = Progam()
            progam.main(self.bind)  
        
        def submit():
            print(f'{entry.get()}')
            entry.configure(state="disabled")
            self.bind = entry.get()

        def clear():
            entry.delete(0, 50)
            entry.configure(state="normal")

        frame_1 = customtkinter.CTkFrame(master=app)
        frame_1.pack(pady=0, padx=0, fill="both", expand=False)

        switch_1 = customtkinter.CTkSwitch(master=frame_1, text="CTkSwitch", command=switch_event,
                                        variable=self.Switch_var, onvalue=True, offvalue=False)
        switch_1.pack(padx=20, pady=10)

        entry = customtkinter.CTkEntry(frame_1, placeholder_text="Digite sua bind. BIND PADRÃO: F2", )
        entry.pack(pady=20)

        my_button = customtkinter.CTkButton(frame_1, text="Pronto", command=submit)
        my_button.pack(pady=10)

        clear_button = customtkinter.CTkButton(frame_1, text="Limpar", command=clear)
        clear_button.pack(pady=10)


        app.mainloop()

    def start_menu():
        menu = Menu()
        menu.main()

    if __name__ == "__main__":
        start_menu()
    

