def selection_sort(arr, size):
    for i in range(size-1):
        minId = i
        for j in range(i+1, size):
            if arr[j] < arr[minId]:
                minId = j

        (arr[i], arr[minId]) = (arr[minId], arr[i])


arr = [-5, -2, 7, 6, 5, 2, 9, 1]
size = len(arr)
print("before sorting Arr :")
print(arr)
selection_sort(arr, size)
print("after sort :")
print(arr)

# for i in range(6):
#     print(i)
# print("\n")
# for i in range(0, 6):
#     print(i)
# print("\n")
# for i in range(0, 6, 2):
#     print(i)
