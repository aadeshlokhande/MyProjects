import pyqrcode 
import png 
from pyqrcode import QRCode 


s = "I miss you"
url = pyqrcode.create(s) 

url.png('myqr.png', scale = 6) 

