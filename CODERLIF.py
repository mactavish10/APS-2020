def fun(str):
    if str.find('111111') != -1:
        print ("#coderlifematters")
    else:
        print ("#allcodersarefun")
 
t = int(raw_input())
 
problemList = []
for x in range(t):
    problemList.append(raw_input().replace(" ",""))
 
for x in range(0,t):
   fun(problemList[x])