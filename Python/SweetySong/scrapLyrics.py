import requests 
from bs4 import BeautifulSoup
from time import sleep

header = ({'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/122.0.0.0 Safari/537.36', 'Accept-Language':'en-US,en;q=0.5'})


url = "https://www.javatpoint.com/python-mcq"
r = requests.get(url,headers=header)
print(r)

soup = BeautifulSoup(r.text, "html.parser")
data = soup.findAll("p")

file = open(f"hello.txt", "w")
for i in data:
    file.write(f"{i.text}\n")
    

file.close()