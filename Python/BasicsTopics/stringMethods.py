# Sample string
text = "   Hello, World!   "

# capitalize()
print(text.capitalize())  # "   hello, world!   "

# lower()
print(text.lower())  # "   hello, world!   "

# upper()
print(text.upper())  # "   HELLO, WORLD!   "

# title()
print(text.title())  # "   Hello, World!   "

# swapcase()
print(text.swapcase())  # "   hELLO, wORLD!   "

# strip()
print(text.strip())  # "Hello, World!"

# lstrip()
print(text.lstrip())  # "Hello, World!   "

# rstrip()
print(text.rstrip())  # "   Hello, World!"

# center()
print(text.center(30, "*"))  # "***   Hello, World!   ***"

# count()
print(text.count("l"))  # 3

# find()
print(text.find("World"))  # 9

# replace()
print(text.replace("Hello", "Hi"))  # "   Hi, World!   "

# startswith()
print(text.startswith("   "))  # True

# endswith()
print(text.endswith("   "))  # True

# split()
words = text.split(",")  # ["   Hello", " World!   "]
print(words)

# join()
joined_text = "-".join(words)  # "   Hello- World!   "
print(joined_text)

# encode()
encoded_text = text.encode("utf-8")
print(encoded_text)  # Encoded bytes

# decode()
decoded_text = encoded_text.decode("utf-8")
print(decoded_text)  # Original string

# strip() + split()
cleaned_words = text.strip().split(",")
print(cleaned_words)  # ["Hello", " World!"]

# partition()
before, sep, after = text.partition(",")
print(before)  # "   Hello"
print(sep)     # ","
print(after)    # " World!   "
