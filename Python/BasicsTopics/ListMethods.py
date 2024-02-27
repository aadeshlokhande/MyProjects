# Sample list
my_list = [3, 1, 4, 1, 5, 9, 2, 6]

# append(item)
print("\n\n# append(item)")
my_list.append(7)
print(my_list)  # [3, 1, 4, 1, 5, 9, 2, 6, 7]

# extend(iterable)
print("\n\n# extend(iterable)")
my_list.extend([8, 9, 10])
print(my_list)  # [3, 1, 4, 1, 5, 9, 2, 6, 7, 8, 9, 10]

# insert(index, item)
print("\n\n# insert(index, item)")
my_list.insert(2, 3.14)
print(my_list)  # [3, 1, 3.14, 4, 1, 5, 9, 2, 6, 7, 8, 9, 10]

# remove(item)
print("\n\n# remove(item)")
my_list.remove(3)
print(my_list)  # [1, 3.14, 4, 1, 5, 9, 2, 6, 7, 8, 9, 10]

# pop([index])
print("\n\n# pop([index])")
popped_item = my_list.pop(4)
print(popped_item)  # 5
print(my_list)      # [1, 3.14, 4, 1, 9, 2, 6, 7, 8, 9, 10]

# index(item[, start[, end]])
print("\n\n# index(item[, start[, end]])")
index_of_9 = my_list.index(9)
print(index_of_9)  # 4

# count(item)
print("\n\n# count(item)")
count_of_1 = my_list.count(1)
print(count_of_1)  # 2

# sort([key=None[, reverse=False]])
print("\n\n# sort([key=None[, reverse=False]])")
my_list.sort()
print(my_list)  # [1, 1, 2, 3.14, 4, 6, 7, 8, 9, 9, 10]

# reverse()
print("\n\n# reverse()")
my_list.reverse()
print(my_list)  # [10, 9, 9, 8, 7, 6, 4, 3.14, 2, 1, 1]

# copy()
print("\n\n# copy()")
new_list = my_list.copy()
print(new_list)

# clear()
print("\n\n# clear()")
my_list.clear()
print(my_list)  # []

# List comprehension example
print("\n\n# List comprehension example")
squared_numbers = [x**2 for x in range(1, 6)]
print(squared_numbers)  # [1, 4, 9, 16, 25]
