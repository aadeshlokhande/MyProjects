import pyautogui as pg
from time import sleep

sleep(3)

file = open("txt.txt","r")
r = 5
c = 3
for i in range(r*c):
    msg  = file.readline()
    pg.typewrite(msg.replace("\n",""),0.04)
    pg.press("tab")
file.close()


# Arithmetic Operators
# Relational Operators
# Logical Operators
# Assignment Operators
# Increment and Decrement Operators
# Bitwise Operators
# Conditional (Ternary) Operator
# sizeof Operator