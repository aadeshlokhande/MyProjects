from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont
import shutil
from tkinter import filedialog

font1 = "Font\Oswald-Bold.ttf"
font2 = r"Font\Roboto-Bold.ttf"
font3 = r'Font\Roboto-Regular.ttf'

################ VARIABLES ####################
loc = filedialog.askdirectory()
infoFile = open(f"{loc}\\APInfo.csv","r")
data = infoFile.readline().split(',')
partner = data[0]
PartnerLoc = data[1]
date = data[2]
APcode = data[3]
APlogo = data[4]
APsign = data[5]
infoFile.close()
########################################


def AddImg(logo,h,w,x=94,y=274):
    im = Image.open(logo).convert("RGBA")
    im1 = im.resize((h,w))
    im1.save("resize.png", format="png")
    img1 = Image.open(r"abc1.png").convert("RGBA")
    img2 = Image.open(r"resize.png",).convert("RGBA")
    img1.paste(img2, (x,y), mask = img2)
    img1.save("abc1.png", format="png")

def WriteText(text,y,fileName="abc1.png",fontsize=23,x=True,font=font3,fg = (0,0,0)):
    img = Image.open(fileName)
    I1 = ImageDraw.Draw(img)
    myFont = ImageFont.truetype(font, fontsize)
    if x==True:
        size = myFont.getsize(text)
        x = 1240-size[0]//2
    I1.text((x, y), text=text,font=myFont, fill = fg)
    img.save("abc1.png")


file = open(f"{loc}\\data.csv","r")
lines = len(file.read().split("\n"))
file.close()
a = 1
file = open(f"{loc}\\data.csv","r")

for i in range(lines):
    data = file.readline().split(",")
    print(data)
    sname = f"{data[1]} {data[2]} {data[3]}"
    sphoto = data[5]
    ssign = data[6]
    WriteText("Authorized Training Center",980,r"Certificates\sample.png",fontsize=45)
    WriteText(partner.upper(),1060,fontsize=65,fg=(255,0,0),font=font1)
    WriteText(PartnerLoc.upper(),1150,fontsize=65,fg=(255,0,0),font=font1)
    
    # WriteText("Certificate",1320,fontsize=150,font="OLDENGL.TTF")
    WriteText("This is to certify that",1520,fontsize=65)
    WriteText(sname,1640,fontsize=65,fg=(255,0,0),font=font1)
    WriteText("Has successfully completed",1760,fontsize=65)
    WriteText("Certificate Course in JAVA Programming",1880,fontsize=65,font=font2)
    WriteText(f"From 12/02/2023 to 17/04/2023",2000,fontsize=65)
    WriteText(f'And has passed the examination with "A+" Grade',2120,fontsize=65)

    WriteText("Certificate Number",2400,fontsize=50)
    WriteText(f"2310010",2460,fontsize=50,fg=(255,0,0),font=font2)

    WriteText(f"Date : {date}",2520,fontsize=50)

    WriteText("APC",1300,x=425,fontsize=50)
    WriteText(APcode,1350,x=360, fontsize=40,fg=(255,0,0))

    AddImg(APlogo,300,300,x=325,y=955)
    AddImg(APsign,300,130,x=475,y=2355)
    AddImg(f"{loc}\{sphoto}",300,300,x=1850,y=955)
    AddImg(f"{loc}\{ssign}",300,130,x=1850,y=1270)

    shutil.copyfile("abc1.png", f"Certificates\Output\{sname}.png")
file.close()
