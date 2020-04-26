from collections import Counter

n = input()
A = map(int,raw_input().strip().split())

cts = Counter(A)
print n-max(cts.values())
