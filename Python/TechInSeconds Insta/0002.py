# title
# Group Anagrams using Python

# explanation
# Grouping anagrams is one of the popular questions in coding interviews. Here you will be given a list of words, and you have to write an algorithm to group all the words which are anagrams of each other. So below is how you can write a Python function to group anagrams

# code 
from collections import defaultdict
# @ICE_Wanadongri
def group_anagrams(a):
    dfdict = defaultdict(list)
    for i in a:
        sorted_i = " ".join(sorted(i))
        dfdict[sorted_i].append(i)
    return dfdict.values()


words = ["tea", "eat", "bat", "ate", "arc", "car"]
print(group_anagrams(words))

# output
# dict_values([['tea', 'eat', 'ate'], ['bat'], ['arc', 'car']])