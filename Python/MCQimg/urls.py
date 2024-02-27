import requests
from bs4 import BeautifulSoup
# from dowloadImg import download


urls = f'https://www.geeksforgeeks.org/quiz-corner-gq'.strip()
print(urls)
grab = requests.get(urls)
soup = BeautifulSoup(grab.text, 'html.parser')
# path = "/home/diamond/Pictures/images/"


print(soup)
file = open("Hello.txt","a")
# file.write(str(soup))
# file.close()

for link in soup.find_all("a"):
    data = link.get('href')
    link = f"{data}\n"
    store = open("imgLinkss.txt",'a')
    store.write(link)
    store.close() 
    url = link.strip()
    print(link)