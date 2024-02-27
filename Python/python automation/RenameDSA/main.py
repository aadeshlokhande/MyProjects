import pyautogui as pg
from time import sleep 
a = 0

file = open("data.txt","r")
data = file.read().split("\n")
file.close() 

sleep(2)
# a = pg.position()
# print(a)
# exit()
a = 0
for name in data:
    pg.click(1744,117,interval=1)
    pg.hotkey("ctrl","a")
    sleep(1)
    pg.hotkey("ctrl","x")
    sleep(1)
    for char in name:
        if(char.lower() in " abcdefghijklmnopqrstuvwxy "):
            pg.typewrite(char)
    sleep(3)
    pg.click(274,180,interval=1)
    pg.press("f2")
    sleep(1)
    pg.hotkey("ctrl","a")
    pg.hotkey("ctrl","x")
    a += 1
    pg.typewrite(f"{a}) {name.upper()}.mp4",0.06)
    pg.press("enter")





