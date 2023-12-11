import ctypes
import requests
import keyboard, mouse

# Cleaned all of this file,
# This file is working.
# Last update 2022,Jan,10


versioncontrol = "2.7"
keylist = ["space", "tab", "capslock"]

def strtobool(string):
    return string.lower() in ("true", 1)


def is_key(string):
    if keyboard.is_modifier(string) or (string.isalpha() and len(string) == 1) or string in keylist:
        return True
    else:
        return False

def is_mouse(string):
    list = ["left", "right", "middle", "wheel", "mouse4", "mouse5"]
    if string in list:
        return True
    else:
        return False

def is_pressed(key):
    if is_key(key):
        return keyboard.is_pressed(key)
    elif is_mouse(key):
        if key == "mouse4":
            return mouse.is_pressed("x")
        elif key == "mouse5":
            return mouse.is_pressed("x2")
        else:
            return mouse.is_pressed(key)
    else:
        MessageBox = ctypes.windll.user32.MessageBoxW(0, f"{key.upper()} is not a valid Key", "Config Error", 0)
        return False