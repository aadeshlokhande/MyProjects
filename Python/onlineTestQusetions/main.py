import pyperclip 
from time import sleep
# poplolpop
questions = []
question= ""

while question!="aadesh":
    sleep(2)
    question = pyperclip.paste()
    questions.append(question)
    try:    
        print(question)
        file = open("questions1.txt","a")
        file.write(question)
        file.write("\n\n\n")
        file.close()
    except:
        pass

questions =  list(set(questions))
questions.sort()
for question in questions:
    file = open("questions.txt","a")
    file.write(question)
    file.write("\n\n\n")
    file.close()
