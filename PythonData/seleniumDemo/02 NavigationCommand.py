"""
AGENDA

Navigation Commands
"""

from selenium import webdriver
from selenium.webdriver.common.keys import Keys

driver = webdriver.Chrome('/home/aadesh/Documents/PycharmProjects/chromedriver/chromedriver')

driver.get('https://www.geeksforgeeks.org/')

print(driver.title)       #geeks

driver.get('https://cyberscopesolution.in/')

print(driver.title)        # cyber

driver.back()               # navigate browser to back

print(driver.title)         # geeks

driver.forward()            # navigate browser to forward

print(driver.title)         #cyber

driver.close()



# frinds = 10000
# career = 30000
# hstel = 10000
# abhishek = 14000
# manish sir = 3000
# spna = 1500


