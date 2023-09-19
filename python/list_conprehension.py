#              without list comprehension
# list = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
# new_list = []

# for i in range(1, 10):
#     new_list.append(i)
# print(new_list)


# using list conprehension

# list2 = [i for i in range(1, 10)]
# print(list2)

# list = []
# for i in range(1, 20):
#     if(i % 2 == 0):
#         list.append(i)
# print(list)

list = []
for i in range(1, 20):
    if(i % 2 == 0):
        if(i % 3 == 0):
            list.append(i)
print(list)

# list2 = [i for i in range(1, 10) if i % 2 == 0]
# print(list2)

# list2 = [i for i in range(1, 10) if i % 2 == 0 if i % 3 == 0]
# print(list2)
