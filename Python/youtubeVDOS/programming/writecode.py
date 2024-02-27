from time import sleep
import pyautogui as pg

headerMsg = "# TECH_IN_SECONDS"

pg.click(1000,500)

file = open("code.txt",'r')
code = file.read()
file.close()

filename = "Barakhadi.py"
code = headerMsg + "\n\n" + code
file = open(filename,'w')
file.close()

pg.hotkey("ctrl",'o')
sleep(1)
pg.typewrite(filename,0.09)

pg.press("down")
pg.press("enter")

line = 0
sleep(3)
for ch in code:
    file = open(filename,"a")
    if ch == "\n":
        if line%22 == 21:
            for i in range(16):
                pg.scroll(-100)
                sleep(0.1)
        line = line + 1
    file.write(ch)
    sleep(0.1)
    file.close()

