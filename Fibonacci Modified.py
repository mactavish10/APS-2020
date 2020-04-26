def fibonacci(n,arr) :
    for i in range(2,n) :
        arr[i] = arr[i-2] + (arr[i-1]**2)
    print(arr[n-1])


t1 , t2 , n = map(int,input().split())
arr = [0 for i in range(n+1)]
# print(arr)
arr[0] = t1
arr[1] = t2
fibonacci(n,arr)
