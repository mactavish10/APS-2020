n , k = map(int,input().split())
arr = list(map(int,input().split()))
b = int(input())

actual_bill = (sum(arr) - arr[k])//2
if b==actual_bill :
    print("Bon Appetit")
else :
    print(abs(b-actual_bill))
