import pyautogui as pg 
from time import sleep
import pyperclip
from songs import songs

msg = "TuHaiToh"
sleep(3)

for line in songs[msg]:
    # pg.typewrite(line,0.1)
    pyperclip.copy(f"*{line}*")
    pg.hotkey("ctrl","v",interval=0.1)
    pg.press("enter")
