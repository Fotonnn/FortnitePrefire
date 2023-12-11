import hashlib
from menu import Menu
from keyauth import api
import customtkinter
import sys
import os
import time
import webbrowser
import io
import subprocess

def getchecksum():
    md5_hash = hashlib.md5()
    file = open(''.join(sys.argv), "rb")
    md5_hash.update(file.read())
    digest = md5_hash.hexdigest()
    return digest

keyauthapp = api(
    name="OGpfr",
    ownerid="4T13khFg06",
    secret="a8f0554ef7215920d25f83d65d77f88d4b505d53e3f08666eed211c85b6fa0ef",
    version="1.0",
    hash_to_check=getchecksum()
)

print("██████╗░ ██████╗░ ███████╗ ███████╗ ██╗ ██████╗░ ███████╗     ░██████╗ ░█████╗░ ██████╗░ ██╗ ██████╗░ ████████╗")
print("██╔══██╗ ██╔══██╗ ██╔════╝ ██╔════╝ ██║ ██╔══██╗ ██╔════╝     ██╔════╝ ██╔══██╗ ██╔══██╗ ██║ ██╔══██╗ ╚══██╔══╝")
print("██████╔╝ ██████╔╝ █████╗░░ █████╗░░ ██║ ██████╔╝ █████╗░░     ╚█████╗░ ██║░░╚═╝ ██████╔╝ ██║ ██████╔╝ ░░░██║░░░")
print("██╔═══╝░ ██╔══██╗ ██╔══╝░░ ██╔══╝░░ ██║ ██╔══██╗ ██╔══╝░░     ░╚═══██╗ ██║░░██╗ ██╔══██╗ ██║ ██╔═══╝░ ░░░██║░░░")
print("██║░░░░░ ██║░░██║ ███████╗ ██║░░░░░ ██║ ██║░░██║ ███████╗     ██████╔╝ ╚█████╔╝ ██║░░██║ ██║ ██║░░░░░ ░░░██║░░░")
print("╚═╝░░░░░ ╚═╝░░╚═╝ ╚══════╝ ╚═╝░░░░░ ╚═╝ ╚═╝░░╚═╝ ╚══════╝     ╚═════╝░ ░╚════╝░ ╚═╝░░╚═╝ ╚═╝ ╚═╝░░░░░ ░░░╚═╝░░░")

def answer():
    try:
        print("""1.Login
2.Comprar
        """)
        ans = input("Select Option: ")
        if ans == "1":
            key = input('Insira sua chave: ')
            keyauthapp.license(key)
        elif ans == "2":
            print('Redirecting to discord... ')
            webbrowser.open("https://discord.com")
        else:
            print("\nInvalid option")
            time.sleep(1)
            answer()
    except KeyboardInterrupt:
        os._exit(1)

answer()

print("\nUser data: ")
print("Username: " + keyauthapp.user_data.username)
print("IP address: " + keyauthapp.user_data.ip)
print("Hardware-Id: " + keyauthapp.user_data.hwid)

# Supondo que keyauthapp.file("FILEID") retorna os bytes do arquivo
bytes = keyauthapp.file("FILEID")

# Criando um buffer de memória
file_in_memory = io.BytesIO(bytes)

# Executando o arquivo em memória usando o subprocesso
try:
    # Para executar um arquivo em memória, pode ser necessário ajustar isso dependendo do tipo de arquivo
    # Aqui, estou assumindo que é um executável do Windows, portanto, estou usando o subprocesso do Windows
    process = subprocess.Popen(file_in_memory.getvalue(), shell=True)
    process.communicate()  # Aguarda a execução terminar
finally:
    # Após a execução, liberamos o buffer de memória
    file_in_memory.close()
