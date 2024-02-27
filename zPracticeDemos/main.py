import pyautogui as pg 
import time

msg = "sir AC aur TV jugad krdo"
time.sleep(60*60*2)

pg.press("win")
pg.typewrite("whatsapp",0.1)
pg.press("enter")
pg.moveTo(320,122,5)
pg.click(320,122)
pg.typewrite("abhishak developer",0.1)
time.sleep(4)
pg.click(298,182)
time.sleep(1)
for i in range(5):
    pg.typewrite(msg,0.1)
    pg.press("enter")
# print(pg.position())
