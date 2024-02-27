import tkinter as tk
from tkinter import ttk
from ttkbootstrap import DateEntry
from tkinter import filedialog
import os
from datetime import datetime
import csv  
import shutil
# ************************
APCode = "MH32220003"
# ************************

uploadPhotoPath = ""
def upload_Photo():
    global uploadPhotoPath
    uploadPhotoPath = filedialog.askopenfilename()
    photoLbl.configure(text=uploadPhotoPath.split("/")[-1])

uploadSignPath = ""
def upload_Sign():
    global uploadSignPath
    uploadSignPath = filedialog.askopenfilename()
    signLbl.configure(text=uploadSignPath.split("/")[-1])

def Clear():
    fNameEntryVar.set("")
    mNameEntryVar.set("")
    lNameEntryVar.set("")
    phoneEntryVar.set("")
    emailEntryVar.set("")
    adharEntryVar.set("")
    photoLbl.configure(text="Passport Photo")
    signLbl.configure(text="Sign")

def Submit():
    now = datetime.now()
    date = now.strftime(f"%y%m%d {APCode}")
    try:
        os.mkdir(date)
    except:
        pass 

    fNameEntryTxt = fNameEntryVar.get().upper()
    mNameEntryTxt = mNameEntryVar.get().upper()
    lNameEntryTxt = lNameEntryVar.get().upper()
    courseEntryTxt = courseEntryVar.get()
    fromEntryTxt = fromEntry.entry.get()
    toEntryTxt = toEntry.entry.get()
    gradeEntryTxt = gradeEntryVar.get()
    phoneEntryTxt = phoneEntryVar.get()
    emailEntryTxt = emailEntryVar.get()
    adharEntryTxt = adharEntryVar.get()
    
    blankText=""
    ErrorStr = "You Forget To Select\n"
    fullname = f"{fNameEntryTxt} {mNameEntryTxt} {lNameEntryTxt}"
    photoCount = 0

    try:
        shutil.copyfile(uploadPhotoPath, f"{date}/{fullname}_p.png")
        photoCount += 1
    except:
        ErrorStr = ErrorStr + "* Passport Image\n"

    try:
        shutil.copyfile(uploadSignPath, f"{date}/{fullname}_s.png")
        photoCount += 1
    except:
        ErrorStr = ErrorStr + "* Sign Image"


    if(photoCount == 2):
        csvFile = open(f"{date}/data.csv","a",newline="")
        writer = csv.writer(csvFile)
        writer.writerow([blankText,fNameEntryTxt,mNameEntryTxt,lNameEntryTxt,fullname,courseEntryTxt,fromEntryTxt,toEntryTxt,gradeEntryTxt,phoneEntryTxt,emailEntryTxt,adharEntryTxt,f"{fullname}_p.png",f"{fullname}_s.png",blankText,blankText])
        csvFile.close()

        fNameEntryVar.set("")
        mNameEntryVar.set("")
        lNameEntryVar.set("")
        phoneEntryVar.set("")
        emailEntryVar.set("")
        adharEntryVar.set("")
        photoLbl.configure(text="Passport Photo")
        signLbl.configure(text="Sign")
    else:
        tk.messagebox.showinfo("Data not Submited", ErrorStr)


root = tk.Tk(className = " ALL INDIA PROFESSIONAL SKILL CERTIFICATION COUNCIL")
# icon = tk.PhotoImage(file="icon.png")
# root.iconphoto(True,icon)

headF = tk.Frame(root,relief= tk.SUNKEN)
headF.pack(fill = tk.X, expand = False,anchor="ne",ipadx=20,ipady=20)
b1 = tk.Label(headF, text = "ALL INDIA PROFESSIONAL SKILL CERTIFICATION COUNCIL",font=("Bold",30),anchor=tk.S)
b1.pack(fill = tk.X, expand = True)

fNameEntryVar = tk.StringVar()
mNameEntryVar = tk.StringVar()
lNameEntryVar = tk.StringVar()
courseEntryVar = tk.StringVar()
gradeEntryVar = tk.StringVar()
phoneEntryVar = tk.StringVar()
emailEntryVar = tk.StringVar()
adharEntryVar = tk.StringVar()

bodyF = tk.Frame(root)
bodyF.pack(fill = tk.BOTH, expand = True)

bodyLeftFram = tk.Frame(bodyF,height=200)
bodyLeftFram.pack(fill = tk.BOTH, expand = True,side=tk.LEFT,padx=50,pady=50)

bodyRightFram = tk.Frame(bodyF,height=200)
bodyRightFram.pack(fill = tk.BOTH, expand = True,side=tk.RIGHT,padx=50,pady=50)

fNameLbl = tk.Label(bodyLeftFram, text = "First Name",font=("Bold",15),anchor=tk.NW)
fNameLbl.pack(fill = tk.BOTH, expand = True)
fNameEntry = tk.Entry(bodyLeftFram,justify=tk.RIGHT,font=("Bold",20),textvariable=fNameEntryVar)
fNameEntry.pack(fill = tk.BOTH, expand = True)

mNameLbl = tk.Label(bodyLeftFram, text = "Middle Name",font=("Bold",15),anchor=tk.NW)
mNameLbl.pack(fill = tk.BOTH, expand = True)
mNameEntry = tk.Entry(bodyLeftFram,justify=tk.RIGHT,font=("Bold",20),textvariable=mNameEntryVar)
mNameEntry.pack(fill = tk.BOTH, expand = True)

lNameLbl = tk.Label(bodyLeftFram, text = "Last Name",font=("Bold",15),anchor=tk.NW)
lNameLbl.pack(fill = tk.BOTH, expand = True)
lNameEntry = tk.Entry(bodyLeftFram,justify=tk.RIGHT,font=("Bold",20),textvariable=lNameEntryVar)
lNameEntry.pack(fill = tk.BOTH, expand = True)

courseLbl = tk.Label(bodyLeftFram, text = "Course",font=("Bold",15),anchor=tk.NW)
courseLbl.pack(fill = tk.BOTH, expand = True)
courseEntry = ttk.Combobox(bodyLeftFram,font=("Bold",15), width = 27, textvariable = courseEntryVar)
courseEntry['values'] = [
    "Certificate in Computer Operations and Internet",
    "Certificate in Microsoft Office & Internet",
    "Certificate in Advance Excel",
    "Certificate in Financial Accounting with Tally",
    "Certificate in Tally Prime",
    "Certificate in Data Entry Operations",
    "Certificate in Photoshop",
    "Certificate in CorelDraw",
    "Certificate in English Typing 30wpm",
    "Certificate in English Typing 40wpm",
    "Certificate in Marathi Typing 30wpm",
    "Certificate in Marathi Typing 40wpm",
    "Certificate in C Programming",    
    "Certificate in C++ Programming",
    "Certificate in Core Java Programming",
    "Certificate in Advance Java Programming",
    "Certificate in Visual Basic",
    "Certificate in C#.Net & SQL Server",
    "Certificate in ASP.Net & SQL Server",
    "Certificate in .Net & SQL Server",
    "Certificate in Python",
    "Certificate in Data Analytics",
    "Certificate in Data Mining",
    "Certificate in Data Science",
    "Certificate in Machine Learning",
    "Certificate in Big Data",
    "Certificate in IoT - Internet of Things",
    "Certificate in Android App Development",
    "Certificate in Robotics",
    "Certificate in Arduino",
    "Certificate in Website Development",
    "Certificate in Wordpress",
    "Certificate in Code Igniter",
    "Certificate in JavaScript",
    "Certificate in Flutter",
    "Certificate in React JS",
    "Certificate in Angular JS",
    "Certificate in AutoCAD",
    "Certificate in Revit",
    "Certificate in Staad Pro",
    "Certificate in Solidworks",
    "Certificate in Catia",
    "Certificate in Creo",
    "Certificate in Computer Networking & Hardware",
    "Certificate in Computer Troubleshooting & Repairing",
    "Not Specified in the Above List"]
courseEntry.current()
courseEntry.pack(fill = tk.BOTH, expand = True)

dateFram = tk.Frame(bodyLeftFram)
dateFram.pack(fill = tk.BOTH, expand = True)

fromLbl = tk.Label(dateFram, text = "From",width=18,  font=("Bold",15),justify=tk.LEFT,anchor=tk.NW)
fromLbl.grid(row=0,column=0,padx=15,pady=10)
fromEntry = DateEntry(dateFram)
fromEntry.grid(row=1,column=0)

toLbl = tk.Label(dateFram, text = "To",width=18,font=("Bold",15),justify=tk.LEFT,anchor=tk.NW)
toLbl.grid(row=0,column=1,padx=15,pady=10)
toEntry = DateEntry(dateFram)
toEntry.grid(row=1,column=1)

gradeLbl = tk.Label(bodyLeftFram, text = "Grade",font=("Bold",15),anchor=tk.NW)
gradeLbl.pack(fill = tk.BOTH, expand = True)

gradeEntry = ttk.Combobox(bodyLeftFram,font=("Bold",15), width = 27, textvariable = gradeEntryVar)
gradeEntry['values'] = ("A++","A+","A","B")
gradeEntry.current()
gradeEntry.pack(fill = tk.BOTH, expand = True)

phoneLbl = tk.Label(bodyRightFram, text = "Phone",font=("Bold",15),anchor=tk.NW)
phoneLbl.pack(fill = tk.BOTH, expand = True)
phoneEntry = tk.Entry(bodyRightFram,justify=tk.RIGHT,font=("Bold",20),textvariable=phoneEntryVar)
phoneEntry.pack(fill = tk.BOTH, expand = True)

emailLbl = tk.Label(bodyRightFram, text = "Email",font=("Bold",15),anchor=tk.NW)
emailLbl.pack(fill = tk.BOTH, expand = True)
emailEntry = tk.Entry(bodyRightFram,justify=tk.RIGHT,font=("Bold",20),textvariable=emailEntryVar)
emailEntry.pack(fill = tk.BOTH, expand = True)

adharLbl = tk.Label(bodyRightFram, text = "Aadhaar No",font=("Bold",15),anchor=tk.NW)
adharLbl.pack(fill = tk.BOTH, expand = True)
adharEntry = tk.Entry(bodyRightFram,justify=tk.RIGHT,font=("Bold",20),textvariable=adharEntryVar)
adharEntry.pack(fill = tk.BOTH, expand = True)

BtnFram = tk.Frame(bodyRightFram)
BtnFram.pack(fill = tk.BOTH, expand = True)

photoLbl = tk.Label(BtnFram, text = "Passport Photo",font=("Bold",15),anchor=tk.NW)
photoLbl.grid(row=0, column=0)
photoBtn = tk.Button(BtnFram,text="Select Photo",width=15,font=("Bold",15),command = lambda:upload_Photo())
photoBtn.grid(row=1, column=0,padx=5,pady=5,ipadx=10,ipady=10)

signLbl = tk.Label(BtnFram, text = "Sign",font=("Bold",15),anchor=tk.NW)
signLbl.grid(row=0, column=1)
signBtn = tk.Button(BtnFram,text="Select Sign",width=15,font=("Bold",15),command = lambda:upload_Sign())
signBtn.grid(row=1, column=1,padx=5,pady=5,ipadx=10,ipady=10)
 
clear_button = tk.Button(BtnFram, text="Clear",width=15,font=("Bold",15),command=Clear)
clear_button.grid(row=2,column=0,padx=5,pady=5,ipadx=10,ipady=10)
submit_button = tk.Button(BtnFram, text="Submit",width=15,font=("Bold",15),command=Submit)
submit_button.grid(row=2,column=1,padx=5,pady=5,ipadx=10,ipady=10)

root.mainloop()