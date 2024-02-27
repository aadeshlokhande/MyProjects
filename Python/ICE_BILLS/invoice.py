from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont
import shutil
from num2words import num2words

def WriteOnImg(text,x,y,img = "demo.png",rgb = (0,0,0)):
    img = Image.open(img)
    I1 = ImageDraw.Draw(img)
    myFont = ImageFont.truetype('Aller_Bd.ttf', 50)
    I1.text((x, y), text, font=myFont, fill = rgb)
    img.save("demo.png")

def CreateInvoice(name,address,course,mobileNo,date,amount):
    WriteOnImg(f"{name}".title(),470,310,"ICE_Bill.png",rgb=(94,23,235))
    WriteOnImg(f"{address}".title(),470,420)
    WriteOnImg(f"{course}".upper(),450,530,rgb=(94,23,235))
    WriteOnImg(f"+91 {mobileNo}",1400,540)
    WriteOnImg(f"{num2words(amount)} only".title(),580,655,rgb=(94,23,235))
    WriteOnImg(f"{date}",470,770)
    WriteOnImg(f"{amount}/-",1550,770,rgb=(94,23,235))
    WriteOnImg("Aadesh Lokhande",1500,885)
    shutil.move('demo.png', f'invoice/{name}.png')

