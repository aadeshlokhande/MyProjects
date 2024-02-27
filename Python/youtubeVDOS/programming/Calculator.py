# TECH_IN_SECONDS

# Today We Are Going To Create Fully Function GUI Calculator Under 50 Lines of Code 
from tkinter import *               # pip install tkinter

root = Tk()
root.title("Calculator By TECH IN SECONDS")
def click(event):
    global scvalue
    text = event.widget.cget("text")
    if text == "=":
        value = int(scvalue.get()) if scvalue.get().isdigit() else eval(screen.get())
        scvalue.set(value)
        totaltext.configure(text = f"Answer is {value}", bg = "orange red")
        screen.update()
    elif text == "C":
        scvalue.set("")
        totaltext.configure(bg = "blue violet",text="Calculator By TECH IN SECONDS")
        screen.update()
    else:
        scvalue.set(scvalue.get() + text)
        screen.update()

BtnTxt , a, scvalue = ["7","8","9","/","4","5","6","*","1","2","3","-","C","0","=","+",] , 0 , StringVar()
scvalue.set("")
f1 = Frame(root, borderwidth = 10, relief = SUNKEN)

screen = Entry(f1, textvar = scvalue,justify="right", font = "lucida 28 bold",bg = "#575757", fg = "white", bd = 10)
screen.grid(row = 0, column = 0, columnspan = 4, ipadx = 20)

for i in range(1,5):
    for j in range(4):
        btntxt = BtnTxt[a]
        b = Button(f1, text = btntxt, font = "lucida 28 bold", fg = "white", height = 2, width = 4, borderwidth =10)
        if(btntxt.isdigit()):
            b.configure(bg = "Cadet blue")
        elif(btntxt.isalpha()):
            b.configure(bg = "red")
        else:
            b.configure(bg = "blue")
        b.grid(row = i, column = j)
        b.bind("<Button-1>", click)
        a += 1

totaltext = Label(f1,text = "Calculator By TECH IN SECONDS", height = 2, font = "lucida 18 bold",bg = "blue violet",fg = "white",width = 22,borderwidth =5,relief = SUNKEN)
totaltext.grid(row = 5, column = 0, columnspan = 4, ipadx = 70)
f1.pack(side = TOP)
root.mainloop()