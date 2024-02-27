import pyttsx3
import pyautogui as pg
from time import sleep
engine = pyttsx3.init()
count = 0
sleep(1)

file = open("words.txt","r")
data = file.read().split("\n")
file.close()

for line in data[:]:
    count = count + 1
    words = line.split()
    line = line.split(":-")
    pg.typewrite(f"Word {count}  \t: ",0.08)
    pg.typewrite(line[0].upper())
    engine.say(f'{line[0]}')
    engine.runAndWait()
    
    pg.typewrite("\nSentence \t:",0.08)
    pg.typewrite(line[1],0.08)
    pg.typewrite(" ")
    engine.say(f'{line[1]}')
    engine.runAndWait()
    sleep(0.5)
    pg.typewrite("\n\n")
    