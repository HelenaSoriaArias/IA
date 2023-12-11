import pyautogui
import time
import keyboard
import sys

i = 0
while True:

    if keyboard.is_pressed("i"):
        img1 = pyautogui.screenshot()
        img1.save("D:/Flores/H"+str(i) +".png")  
        i = i+1
    if keyboard.is_pressed("e"):
        sys.exit(0)
