def int_to_roman(num):
    roman_symbols = [
        ("M", 1000),
        ("CM", 900),
        ("D", 500),
        ("CD", 400),
        ("C", 100),
        ("XC", 90),
        ("L", 50),
        ("XL", 40),
        ("X", 10),
        ("IX", 9),
        ("V", 5),
        ("IV", 4),
        ("I", 1)
    ]

    roman_numeral = ""

    for symbol, value in roman_symbols:
        while num >= value:
            roman_numeral += symbol
            num -= value

    return roman_numeral

number = int(input("Enter a number: "))
if 1 <= number <= 3999:
    roman_representation = int_to_roman(number)
    print(f"The Roman numeral representation of {number} is: {roman_representation}")
else:
    print("Please enter a number between 1 and 3999.")
