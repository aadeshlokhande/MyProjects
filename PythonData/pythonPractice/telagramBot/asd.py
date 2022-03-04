# import inline
# c = inline.c(
# '''
# int adwd(int a, int b) 
# {
#     return a * b;
# }
# ''')
# a = c.adwd(40, 2)
# print(a)



from fuzzywuzzy import process
str2Match = "apple inc"
strOptions = ["Apple Inc.","apple park","apple incorporated","iphone"]
Ratios = process.extract(str2Match,strOptions)
print(Ratios)
# You can also select the string with the highest matching percentage
highest = process.extractOne(str2Match,strOptions)
print(highest)