# TECH_IN_SECONDS

# Today We Are Going To Print Hindi Barakhadi Using Prettytable In PYTHON

# import the PrettyTable library
from prettytable import PrettyTable

# define a list of Hindi vowels
vowels = ["A", "a", "i", "ee", "u", "oo", "e", "ai", "o", "au", "am", "an"]

# create a new table with the vowels as column headings
table = PrettyTable(vowels)

# define a list of Hindi consonants
letters = ["k", "kh", "g", "gh", "ch", "chh", "j", "jh", "t", "th", "d", "d", "n", "t", "th", "d", "dh", "n", "p", "ph", "b", "bh", "m", "y", "r", "l", "w", "sh", "sh", "s", "h", "ksh", "gy"]

# for each consonant in the letters list, create a row with each vowel appended to the consonant
for char in letters:
    # create an empty list to store the row data
    list = []
    # for each vowel in the vowels list, append the consonant + vowel combination to the row list
    for i in vowels:
        list.append(char + i)
    # add the completed row to the table
    table.add_row(list)

# convert the table to a string and convert to uppercase for readability
barakhadi = str(table).upper()

# print the resulting table string
print(barakhadi)
