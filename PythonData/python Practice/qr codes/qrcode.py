# Import QRCode from pyqrcode
import pyqrcode
# import png
# from pyqrcode import QRCode
s = ""
url = pyqrcode.create(s)
url.png(f'myqr.png', scale = 50)