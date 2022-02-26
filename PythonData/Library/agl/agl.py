import calendar
from datetime import datetime
import cryptocompare
import emojis
import pyfiglet
import pyshorteners
import pywhatkit as kit
import speedtest
import wikipedia
from covid import Covid
from instagramy import InstagramUser as insta
from number2words import Number2Words
from PyDictionary import PyDictionary
from translate import Translator
from textblob import TextBlob
import os

class Agl:

    def bitToDec(self,number):
        a = int(str(number),2)
        return a
    
    def decToBit(self,n):
        return bin(n).replace("0b", "")


    def time(self):
        try:
            now = datetime.now()
            date_time = now.strftime("%H %M %S")
            return date_time.split()
        except:
            pass 
        
    def date(self):
        now = datetime.now()
        date_time = now.strftime("%d %m 20%y")
        return date_time.split()

    def info(self):
        data = """Name : Aadesh G. Lokhande
Instagram : www.instagram.com/tech_in_seconds"""
        print(data)
    
    def netspeed(self):
        try:
            net = speedtest.Speedtest() 
            speed = {"Downloading speed" : f"{int(net.download())/1000000} Mbps",
            f"Uploading Speed" :f"{int(net.upload())/1000000} Mbps"}
            return speed
        except:
            try:
                os.system("pip install speedtest-cli")
            except:
                os.system("pip3 install speedtest-cli")

    def wiki(self,word):
        try:
            word = str(TextBlob(word).correct())
            try:
                return str(wikipedia.summary(word))
            except:
                return "Wrong Input\ntype: wiki <anytopic>\nExample:- wiki tajmahal"
        except:
            try:
                os.system("pip install wikipedia")
            except:
                os.system("pip3 install wikipedia")


    def mean(self,word):
        try:
            dictionary=PyDictionary()
            word = str(TextBlob(word).correct())
            mean = dictionary.meaning(word)
            ac, vc, nc = 1,1,1

            full_sentense = ""

            if str(dictionary.meaning(word))!="None":
                try:
                    full_sentense = full_sentense + "Noun : "
                    for noun in mean["Noun"]:
                        full_sentense = full_sentense + "\n"+ str(nc)+") "+noun
                        nc = nc + 1
                    full_sentense = full_sentense + "\n"
                except:
                    full_sentense = full_sentense + "N\\A\n"
                try:
                    full_sentense = full_sentense + "\n"+ "Adjective : "
                    for ad in mean["Adjective"]:
                        full_sentense = full_sentense + "\n"+ str(ac)+") "+ad
                        ac = ac + 1
                    full_sentense = full_sentense + "\n"
                except:
                    full_sentense = full_sentense + "N\\A\n"
                try:
                    full_sentense = full_sentense + "\n"+ "Verb : "
                    for verb in mean["Verb"]:
                        full_sentense = full_sentense + "\n"+ str(vc)+") "+verb
                        vc = vc + 1
                    full_sentense = full_sentense + "\n"
                except:
                    full_sentense = full_sentense + "N\\A\n"
                return(f"Word : {word.upper()}\n\n{full_sentense}")
            else:
                return(f"\"{word}\" \nWord not Found")
        except:
            try:
                os.system("pip install PyDictionary")
            except:
                os.system("pip3 install PyDictionary")


    def bigLeters(self,word):
        try:
            return pyfiglet.figlet_format(word)
        except:
            try:
                os.system("pip install pyfiglet")
            except:
                os.system("pip3 install pyfiglet")

    def emoji(self,word):
        try:
            word = str(TextBlob(word).correct())
            emoji = ":"+word+":"
            return emojis.encode(emoji)
        except:
            try:
                os.system("pip install emoji")
            except:
                os.system("pip3 install emoji")

    def n2w(self,number):
        try:
            try:
                number2words = Number2Words(int(number))
                return str(number2words.convert())
            except:
                return "Wrong Input\ntype: word in <any number>\nExample:- word in 12"
        except:
            try:
                os.system("pip install number2words")
            except:
                os.system("pip3 install number2words")

    def urlshort(self,url):
        try:
            link = pyshorteners.Shortener().tinyurl.short(str(url))
            return str(link)
        except:
            try:
                os.system("pip install pyshorteners")
            except:
                os.system("pip3 install pyshorteners")

    def table(self,number):
        table = f"::: Table of {number} :::\n\n"
        for i in range(1,11):
            table = table + f"{int(number)} x {i} = {i*int(number)}\n"
        return table

    def instagram(self,username):
        try:
            user = insta(username)
            try:
                idurl = user.profile_picture_url

                id_url = pyshorteners.Shortener().tinyurl.short(idurl)

                data = {
                    "userName": f"{user.username}",
                    "fullName": f"{user.fullname}",
                    "bio" : f"{user.biography}",
                    "followers" : f"{user.number_of_followers}",
                    "following" : f"{user.number_of_followings}",
                    "posts" : f"{user.number_of_posts}",
                    "private" : f"{user.is_private}",
                    "verified" : f"{user.is_verified}",
                    "profilePic" : f"{id_url}",
                    "website" : f"{user.website}"}
                return data
            except:
                return "Wrong Input\ntype: instagram <username>\nExample:- instagram aadesh_lokhande"
        except:
            try:
                os.system("pip install instagramy")
            except:
                os.system("pip3 install instagramy")

    def translate(self,line,from_lang = "en",to_lang="hi"):
        try:
            text = str(TextBlob(line).correct())
            translator= Translator(to_lang=to_lang,from_lang=from_lang)
            translation = translator.translate(text)
            return translation
        except:
            try:
                os.system("pip install translate")
            except:
                os.system("pip3 install translate")

    def covid(self,msg): 
        try:    
            covid = Covid()
            if ("world"==msg) or ("all"==msg):
                case = f"Total Active cases:- {covid.get_total_active_cases()} \nTotal Confirmed cases:- {covid.get_total_confirmed_cases()} \nTotal Recoverd cases:- {covid.get_total_recovered()} \nTotal Death:- {covid.get_total_deaths()}"
                return case
            else:
                msg = str(TextBlob(msg).correct())

                place = covid.get_status_by_country_name(msg)
                data = {
                    key : place[key]
                    for key in place.keys() and {'confirmed','active','deaths','recovered'}}
                a = f"{msg.capitalize()} Active cases:- {data['active']} \n{msg.capitalize()} Confirmed cases:- {data['confirmed']} \n{msg.capitalize()} Recoverd cases:- {data['recovered']} \n{msg.capitalize()} Total Death:- {data['deaths']}"
                return a
        except:
            try:
                os.system("pip install covid")
            except:
                os.system("pip3 install covid")

    def youtube(self,title):
        try:
            kit.playonyt(title)
            return "Playing"
        except:
            try:
                os.system("pip install pywhatkit")
            except:
                os.system("pip3 install pywhatkit")

    def googleSearch(self, topic):
        try:
            kit.search(topic) 
        except:
            try:
                os.system("pip install pywhatkit")
            except:
                os.system("pip3 install pywhatkit")

    def bitcoin(self):
        try:
            price = cryptocompare.get_price('BTC', currency='USD')['BTC']['USD']
            return f"Current Bitcoin Price Is {str(price)} US Dollers"
        except:
            try:
                os.system("pip install cryptocompare")
            except:
                os.system("pip3 install cryptocompare")

    def calculate(self,equation):
        try:
            return "Answer = "+str(eval(equation))
        except:
            return "There is problem in your equation. check and try again\nThis is a simple Calculator"

    def month(self,month=9,year=1997):
        try:
            return calendar.month(year,month)
        except:
            return "Wrong Input\nType: month <month> <year>\nExample: month 9 1997"

    def help(self):
        dic = {
            'bigLeters':"",
            'bitcoin':"",
            'calculate':"",
            'covid':"",
            'date':"",
            'emoji':"",
            'googleSearch':"",
            'info':"",
            'instagram':"",
            'mean':"",
            'month':"",
            'n2w':"",
            'netspeed':"",
            'table':"",
            'time':"",
            'translate':"",
            'urlshort':"",
            'wiki':"",
            'youtube':""
        }
        return dic
