import pyautogui as pg 
from time import sleep
import pyperclip

file = open("msg.txt")
a = file.readlines()

sleep(3)

for line in a:
    pyperclip.copy(f'add line "{line.replace("\n","")}"')
    pg.hotkey("ctrl","v",interval=3)
    pg.press("enter")
file.close()
