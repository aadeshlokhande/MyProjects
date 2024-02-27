import requests
from bs4 import BeautifulSoup

file = open("imgLinks.txt")
links = file.read().split("\n")
file.close()

for plp in links[:1]:
    grab = requests.get(plp)
    soup = BeautifulSoup(grab.text, 'html.parser')

    # print(str(soup))
    data = str(soup).replace('\u25b2',"")
    data = str(soup).replace('\U0001f641',"")
    # file = open("code.html","w")
    # file.write(data)
    # file.close()
    print(data)