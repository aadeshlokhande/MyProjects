
file = open("contacts.txt","r")
lit = []
for i in file:
    lit.append(i)

lit = list(set(lit))
print(len(lit))
file.close()

file = open("finelContacts.txt","w")
for i in lit:
    if(len(i) == 11):
        print(len(i)," - " ,i)
        file.write(f"{i}")
file.close()