import pyttsx3
engine = pyttsx3.init()

file = open("read.txt","r")
data = file.read()
file.close()

engine.say(f'{data}')
engine.runAndWait()
