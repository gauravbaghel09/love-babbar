# x = [[1, 2, 3], [2, 1, 3]]
# y = [[1, 1], [2, 2], [2, 3]]
# res = [[0, 0, 0], [0, 0, 0]]
# # print(len(x[0]), len(y))
# if len((x[0])) != len((y)):
#     raise ValueError("invalid diamension")

# for i in range(len(x)):
#     for j in range(len(y[0])):
#         for k in range(len(y)):
#             res[i][j] += x[i][k]*y[k][j]

# for r in res:
#     print(r)


file = open("hey.txt", 'r')
freq_word = " "
freq = 0
words = []
for line in file:
    line_word = line.lower().replace('.', '').replace(',', ',').split(" ")
    for w in line_word:
        words.append(w)
for i in range(0, len(words)):
    count = 1
    for j in range(i+1, len(words)):
