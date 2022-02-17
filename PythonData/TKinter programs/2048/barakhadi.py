pop = ["a","a","i","ee","u","oo","e","ai","o","au","am","an"]

letters = ["k","kh","g","gh","ch","chh","j","jh","t","th","d","d","n","t","th","d","dh","n","p","ph","b","bh","m","y","r","l","w","sh","sh","s","h","ksh","gy"]

# char = input("Enter a letter = ")

# available = "no"
# for i in letters:
#     if i == char:
#         available = "yes"

# if available=="yes":
#     for i in pop:
#         print(f"{char}{i}")


for char in letters:
    for i in pop:
        print(f"{char}{i}",end="\t")
    print()