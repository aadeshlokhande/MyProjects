import webbrowser  
from time import sleep
file = open("imgLinks.txt","r")
urls = file.read().split("\n")


for url in urls:
    webbrowser.open_new_tab(url)  
    sleep(3)