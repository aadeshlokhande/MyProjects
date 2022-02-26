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
from textblob import TextBlob
from translate import Translator


class Calculate:
    def printvalue(self,name):
        print(f"Hello {name}")

    def bitToDec(self,number):
        a = int(str(number),2)
        return a
    
    def decToBit(self,n):
        return bin(n).replace("0b", "")


def bot(input_text):
    user_message = str(input_text).lower()
    if user_message in ("hello", "hey", "hi","hii"):
        return "Hey Buddy... what's going on?"

    if user_message in ("how are you", "how are you?"):
        return "I'm fine dude... how are you?"

    if user_message in ("who are you", "who are you?"):
        return "I am a bot"
    
    if user_message in ("chutiya","chutiye","lawde","lawdu","lawda","gandu","bsdk","bhosdike","madarchod","mc","bc",):
        return "Yahi patak ke Chod Denge...\nNikal madarchod..."

    if user_message in ("time?", "time"):
        now = datetime.now()
        date_time = now.strftime("Time : %H:%M:%S")
        return str(date_time)
    
    if user_message in ("date", "day"):
        now = datetime.now()
        date_time = now.strftime("Date : %d / %m / 20%y")
        return str(date_time)

    if user_message in ("author insta id"):
        return "https://www.instagram.com/aadesh__lokhande/"
    
    if user_message in ("net speed","internet speed","download speed",""):
        net = speedtest.Speedtest() 
        dspeed = f"Downloading speed = {int(net.download())/1000000} Mbps\n"
        upspeed = f"Uploading Speed = {int(net.upload())/1000000} Mbps"
        return dspeed+upspeed
    
    if user_message in ("are you okey?","are you ok", "are you okey", "are you ok?"):
        return "Yes, I’m fine, thanks"

    if user_message in ("gm","good morning", "morning"):
        emoji = emojis.encode(":rose:")
        return f"Very Good Morning {emoji}"
    
    if user_message in ("gn", "good night", "night"):
        return "Good Night"
    
    if user_message in ("i love you","i love you so much","i like this bot"):
        heart = emojis.encode(":heart:")
        return f"Thank you{heart}"

    if user_message in ("where are you from","where are you from?","where are you","where are you?"):
        return "I Don't like to share my Location"
    
    if user_message in ("what do you do","what do you do?"):
        return "I'm a Python Developer"
    
    if user_message in ("what are you doing?", "what are you doing"):
        return f"learning📚 advance level Python🐍..."
    
    if user_message in ("author fb id"):
        return "https://www.facebook.com/aadesh00786/"
    
    if user_message in ("fine","f9","i am fine", "i'm fine", "good", "i'm good", "i am good"):
        return "great...!!! "

    if "wiki" in user_message:
        word = user_message[5:]

        word = str(TextBlob(word).correct())
        try:
            return str(wikipedia.summary(word))
        except:
            return "Wrong Input\ntype: wiki <anytopic>\nExample:- wiki tajmahal"
    
    if "mean" in user_message:
        dictionary=PyDictionary()
        word = user_message[5:]
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
    
    if "big" in user_message:
        word = user_message[4:]
        return pyfiglet.figlet_format(word)

    if "emoji" in user_message:
        word = user_message[6:]
        word = str(TextBlob(word).correct())
        emoji = ":"+word+":"
        return emojis.encode(emoji)
    
    if "word in" in user_message:
        number = user_message[8:]
        try:
            number2words = Number2Words(int(number))
            return str(number2words.convert())
        except:
            return "Wrong Input\ntype: word in <any number>\nExample:- word in 12"

    if "url" in user_message:
        url = user_message[4:]
        link = pyshorteners.Shortener().tinyurl.short(str(url))
        return str(link)

    if "table" in user_message:
        a = user_message.split(" ")
        number = a[1]
        table = f"::: Table of {number} :::\n\n"
        for i in range(1,11):
            table = table + f"{int(number)} x {i} = {i*int(number)}\n"
        return table

    if "instagram" in user_message:
        username = user_message[10:]

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

    if "translate" in user_message:
        line = str(user_message[10:])
        text = str(TextBlob(line).correct())
        translator= Translator(to_lang="hi",from_lang='en')
        translation = translator.translate(text)

        return translation

    if "reverse" in user_message:
        line = user_message[8:].capitalize()
        return line[::-1]

    if "upper" in user_message:
        line = user_message[6:].upper()
        return line

    if "lower" in user_message:
        line = user_message[6:].lower()
        return line

    if "covid" in user_message:
        msg = user_message[6:]
        
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

    if "ytplay" in user_message:
        topic = user_message[7:]
        kit.playonyt(topic)
        return "Playing"

    if "find" in user_message:
        msg = user_message[5:]
        kit.search(msg) 
    
    if "bitcoin"==user_message:
        price = cryptocompare.get_price('BTC', currency='USD')['BTC']['USD']
        return f"Current Bitcoin Price Is {str(price)} US Dollers"
    
    if "calc" in user_message:
        eq = user_message[5:]
        try:
            return "Answer = "+str(eval(eq))
        except:
            return "There is problem in your equation. check and try again\nThis is a simple Calculator"

    if "month" in user_message:
        msg = user_message.split(" ")
        try:
            return calendar.month(int(msg[2]),int(msg[1]))
        except:
            return "Wrong Input\nType: month <month> <year>\nExample: month 9 1997"

    if "resume" in user_message:
        return "tinyurl.com/AadeshResume"
        
    return "I don't understand you."


a = bot("instagram aadesh__lokhande")
print(a)