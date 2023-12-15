import pyautogui
import time
import keyboard
import sys

i = 211
while True:

    if keyboard.is_pressed("a"):
        img1 = pyautogui.screenshot()
        img1.save("D:/Flores/HTS"+str(i) +".png")  
        i = i+1
    if keyboard.is_pressed("e"):
        sys.exit(0)
 