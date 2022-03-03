import pyautogui as pg
from time import sleep

file =open("pandas.txt",'r')
data = file.read()
file.close()

data = data.split("\n")
# print(data)

# sleep(3)
# print(pg.position())
# exit()
for i in range(len(data)):
    pg.click(455,72)
    sleep(1)
    pg.hotkey("ctrl","a")
    pg.hotkey("ctrl","x")
    sleep(1)
    pg.write(f"part-{i+1}",0.05)
    # pg.write(data[i],0.05)
    sleep(1)
    pg.click(487,154)
    pg.press("f2")
    pg.hotkey("ctrl","a")
    pg.hotkey("ctrl","x")
    pg.typewrite(f"{data[i]}",0.05)
    pg.press("enter")


