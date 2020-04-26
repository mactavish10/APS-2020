n = int(input())
arr = list(map(int,input().split()))

count = [0 for i in range(101)]
c = 0
# print(len(count))
for i in range(n) :
    # print(arr[i])
    count[arr[i]]+=1
    if(count[arr[i]]%2==0) :
        c+=1


# l = 1
# # print(count)
# for i in range(n) :
#     if count[i]>l :
#         # print(count[i])
#         c = c + count[i]//2
print(c)
