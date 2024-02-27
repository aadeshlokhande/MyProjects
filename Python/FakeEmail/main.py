import smtplib 
from_email = "lololol@amail.com" 
password = "Helllo@1209"
fake_name = "Mr Beast" 
to_name = "Joe" 
to_email = "aadeshlokhande11@gmail.com" 
subject = "CRYPTO GIVEAWAY!!!" 
body = "kand ghya kand... babaji che kand" 

msg = f"From: {fake_name} <{from_email}>\nTo: {to_name} <{to_email}>\nSubject: {subject}\n{body}" 
server = smtplib.SMTP("smtp.gmail.com",587) 
server.starttls() 
server. login(from_email,password) 
server.sendmail(from_email,to_email,msg.encode()) 
server.close()
