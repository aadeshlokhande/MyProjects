import pyautogui as pg 
from time import sleep

sleep(3)

for i in range(1):
    pg.typewrite("I Love You",0.07)
    pg.press("enter")
