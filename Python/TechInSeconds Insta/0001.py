# title 
# Number Guessing Game using Python

# explanation
# The number guessing game, popular among programmers, involves the program selecting a random number for the user to guess.

# To make a guessing game, write a program that randomly selects a number between 1 and 10. Use conditional statements to provide hints about whether the guessed number is smaller, greater than, or equal to the selected number.

# code 
# import random
# n = random.randrange(1,10)
# guess = int(input("Enter any number: "))
# while n!= guess:
#     if guess < n:
#         print("Too low")
#         guess = int(input("Enter number again: "))
#     elif guess > n:
#         print("Too high!")
#         guess = int(input("Enter number again: "))
#     else:
#       break
# print("you guessed it right!!")


# output
# Enter any number: 2
# Too low
# Enter number again: 9
# Too high
# Enter number again: 7
# you guessed it right!!

