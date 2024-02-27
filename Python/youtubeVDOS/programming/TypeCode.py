btns = {
    "a" : (272, 935) ,
    "b" : (758, 992) ,
    "c" : (550, 993) ,
    "d" : (502, 936) ,
    "e" : (440, 878) ,
    "f" : (594, 931) ,
    "g" : (714, 932) ,
    "h" : (812, 934) ,
    "i" : (983, 876) ,
    "j" : (925, 932) ,
    "k" : (1020, 928) ,
    "l" : (1132, 927) ,
    "m" : (980, 992) ,
    "n" : (871, 989) ,
    "o" : (1090, 875) ,
    "p" : (1199, 878) ,
    "q" : (213, 878) ,
    "r" : (544, 875) ,
    "s" : (382, 935) ,
    "t" : (649, 873) ,
    "u" : (871, 876) ,
    "v" : (654, 991) ,
    "w" : (326, 875) ,
    "x" : (439, 987) ,
    "y" : (760, 878) ,
    "z" : (321, 992) }
import pyautogui as pg 
from time import sleep
sleep(3)

for i in "abcdefghijklmnopqrstuvwxyz":
    # a = pg.position()
    print(i)
    sleep(1)
    # file = open("helloAadesh.txt",'a')
    # file.write(f"{i} : {a} ,\n")
    # file.close()
    pg.doubleClick(btns[i])
    pg.click(btns[i])


