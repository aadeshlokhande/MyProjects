import webbrowser  

file = open("urls.txt","r")
urls = file.read().split("\n")


for url in urls:
    webbrowser.open_new_tab(url)  