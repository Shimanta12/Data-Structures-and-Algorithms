def array_reverse(arr):
    s = 0
    e = len(arr)-1
    while (s < e):
        arr[s], arr[e] = arr[e], arr[s]
        s += 1
        e -= 1


arr = [21, 3, 43, 54, 65, 7]
array_reverse(arr)
for e in arr:
    print(e, end=" ")
