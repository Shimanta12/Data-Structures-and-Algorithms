def binary_search(arr, key):
    s = 0
    e = len(arr)-1
    while (s <= e):
        mid = (s+e)//2
        if arr[mid] == key:
            return mid
        elif key < arr[mid]:
            e = mid-1
        else:
            s = mid+1
    return -1


arr = [12, 43, 45, 65, 77, 85]
key = int(input("Enter key: "))
index = binary_search(arr, key)
if (index != -1):
    print(key, "is at position", index)
else:
    print(key, "NOT found!")
