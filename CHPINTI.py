def get(dictOfElements, valueToFind):
    listOfKeys = list()
    listOfItems = dictOfElements.items()
    for item  in listOfItems:
        if item[1] == valueToFind:
            listOfKeys.append(item[0])
    return  listOfKeys


t = int(input())
while t :
    t-=1
    n , m = map(int,input().split())
    baskets = list(map(int,input().split()))
    prices = list(map(int,input().split()))
    tot_price = {new_list: 0 for new_list in range(1,m+1)}
    b = list(range(1,m+1))
    for i in range(n) :
        tot_price[baskets[i]] += prices[i]
    for _ in b :
        if _ not in baskets :
            del tot_price[_]
    # print(tot_price)
    print(min(list(tot_price.values())))
    # print(min(tot_price))
