import customtkinter
import tkinterDnD

class Menu:
    def execApp():
        customtkinter.set_ctk_parent_class(tkinterDnD.Tk)

        customtkinter.set_appearance_mode("dark")  # Modes: "System" (standard), "Dark", "Light"
        customtkinter.set_default_color_theme("green")  # Themes: "blue" (standard), "green", "dark-blue"

        app = customtkinter.CTk()
        app.geometry("400x200")
        app.title("Prefire Script")

        print(type(app), isinstance(app, tkinterDnD.Tk))

        def checkbox_callback():
            print("Activated")

        def button_callback():
            print("Button click")


        frame_1 = customtkinter.CTkFrame(master=app)
        frame_1.pack(pady=0, padx=0, fill="both", expand=False)

        checkbox_1 = customtkinter.CTkCheckBox(master=frame_1, command=checkbox_callback, text="Ativar Prefire")
        checkbox_1.pack(pady=10, padx=10)

        button_1 = customtkinter.CTkButton(master=frame_1, command=button_callback, text="Selecionar Bind")
        button_1.pack(pady=10, padx=10)

        app.mainloop()