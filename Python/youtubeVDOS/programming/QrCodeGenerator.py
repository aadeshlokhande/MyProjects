# TECH_IN_SECONDS

# LETS CREATE QR CODE GENERATOR
import qrcode  # Import the qrcode library
import io

# Define the text that the QR code should encode
text = "instagram.com/tech_in_seconds"

# Create a QRCode instance and add the text to it
qr = qrcode.QRCode()
qr.add_data(text)

# Create an io.StringIO object to store the ASCII art output of the QR code
f = io.StringIO()

# Use the print_ascii() method to generate an ASCII art representation of the QR code
# and save it to the StringIO object
qr.print_ascii(out=f)

# Move the file pointer to the beginning of the StringIO object
f.seek(0)

# Read and print the contents of the StringIO object
print(f.read())