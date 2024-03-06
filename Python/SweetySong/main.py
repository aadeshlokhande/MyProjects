import pyautogui as pg 
from time import sleep
import pyperclip
from songs import songs

msg = "TuHaiToh"
sleep(3)

for line in songs[msg]:
    pyperclip.copy(f"*{line}*")
    pg.hotkey("ctrl","v",interval=0.6)
    pg.press("enter")
