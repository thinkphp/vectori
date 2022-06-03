def main():
 
    arr = [23, 14, 20, 16, 23, 1, 2, 14, 20, 5, 16, -1]
 
    n = len(arr)
 
    for i in range(0, n - 1):
        if arr[i]:
            print(arr[i], end = " ")
            for j in range(i + 1, n):
                if arr[i] == arr[j]:
                    arr[j] = 0
    if arr[n-1]:
        print(arr[n-1])
main()
