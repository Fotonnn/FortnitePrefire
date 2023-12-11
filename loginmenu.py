import customtkinter
import sys
import hashlib
from menu import Menu
from keyauth import *
from dotenv import dotenv_values
from io import StringIO 


def getchecksum():
    md5_hash = hashlib.md5()
    file = open(''.join(sys.argv), "rb")
    md5_hash.update(file.read())
    digest = md5_hash.hexdigest()
    return digest


keyauthapp = api(
    name = "OGpfr",
    ownerid = "4T13khFg06",
    secret = "a8f0554ef7215920d25f83d65d77f88d4b505d53e3f08666eed211c85b6fa0ef",
    version = "1.0",
    hash_to_check = getchecksum()
)


customtkinter.set_appearance_mode("Dark")
customtkinter.set_default_color_theme("green")

root = customtkinter.CTk()
root.geometry("600x400")
root.wm_iconbitmap('icon.ico')
root.title("Prefire - Foton")

def login():
    key = entry3_var.get()
    keyauthapp.license(key)
    root.destroy()
    Menu.start_menu()


frame = customtkinter.CTkFrame(master=root)
frame.pack(pady=20, padx=60, fill="both", expand=True)

label = customtkinter.CTkLabel(master=frame, text="Prefire Script Login", font=("Roboto", 24))
label.pack(pady=12, padx=10)

entry3_var = customtkinter.StringVar(value='Key')
entry3 = customtkinter.CTkEntry(master=frame, placeholder_text="Key", textvariable=entry3_var)
entry3.pack(pady=12, padx=10)

login_button = customtkinter.CTkButton(master=frame, text="Logar", command=login)
login_button.pack(pady=6, padx=10)

if __name__ == "__main__":
    root.mainloop()