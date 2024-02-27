import pyautogui as pg 
from time import sleep 

# sleep(2)
# print(pg.position())
# exit()
for i in range(101,151):
    pg.rightClick(1422,393)
    sleep(1)
    pg.click(1521,610)
    sleep(3)
    pg.typewrite(f"image_{i}",0.1)
    pg.press('enter')
    sleep(2)
    # pg.click(1732,357)
    pg.press("right")
    sleep(1)
