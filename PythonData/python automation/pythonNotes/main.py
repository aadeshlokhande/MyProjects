import pyautogui as pg 
from time import sleep

sleep(4)
for i in range(31):
    pg.click(1250,50)
    sleep(5)
    pg.click(353,145)
    sleep(5)
    pg.click(468,264)
    sleep(3)
    pg.hotkey('ctrl','w')
    sleep(3)
    