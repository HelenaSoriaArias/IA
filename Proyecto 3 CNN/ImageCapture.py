import pyautogui
import time
import keyboard
import sys

i = 1
while True:

    if keyboard.is_pressed("a"):
        img1 = pyautogui.screenshot()
        img1.save("D:/Flores/R"+str(i) +".png")  
        i = i+1
    if keyboard.is_pressed("e"):
        sys.exit(0)
 