import pyautogui as pg 
from time import sleep
import pyperclip
from songs import songs

songName = list(songs.keys()) 

for name in songName:
    print( "Press ",songName.index(name) ,":", name)

choice = int(input("enter your choice = "))
msg = songName[choice]

sleep(3)

for line in songs[msg]:
    pyperclip.copy(f"*{line}*")
    pg.hotkey("ctrl","v",interval=1)
    pg.press("enter")
