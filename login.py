import hashlib
from menu import Menu
from keyauth import api
import customtkinter
import sys

def getchecksum():
    md5_hash = hashlib.md5()
    file = open(''.join(sys.argv), "rb")
    md5_hash.update(file.read())
    digest = md5_hash.hexdigest()
    return digest

def login():
    key = input("Digite a chave: ")
    success = keyauthapp.license(key)
    if success:
        print("Login bem-sucedido!")
        Menu.execApp()
    else:
        print("Chave inválida. Tente novamente.")

keyauthapp = api(
    name="OGpfr",
    ownerid="4T13khFg06",
    secret="a8f0554ef7215920d25f83d65d77f88d4b505d53e3f08666eed211c85b6fa0ef",
    version="1.0",
    hash_to_check=getchecksum()
)

customtkinter.set_appearance_mode("Dark")
customtkinter.set_default_color_theme("green")

def main():
    print("Prefire Script Login")
    login()

if __name__ == "__main__":
    main()
