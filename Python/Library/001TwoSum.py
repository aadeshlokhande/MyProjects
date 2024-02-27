# sum two
import ast 
Input = input("Input = ")
Target = int(input("Target = "))
List = ast.literal_eval(Input)

list = []
for i in List:
    for j in List:
        if(i+j ==Target):
            list.append([i,j])
print(list) 



