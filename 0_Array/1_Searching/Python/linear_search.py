def linear_search(arr, key):
    print(len(arr))
    for i in range(len(arr)):
        if arr[i] == key:
            return i
    return -1


arr = [12, 43, 45, 65, 37, 45]
key = int(input("Enter key: "))
index = linear_search(arr, key)
if (index != -1):
    print(key, "is at position", index)
else:
    print(key, "NOT found!")
