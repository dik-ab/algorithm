"""AtCoder Beginner Contest 298 D"""
from collections import deque

MOD = 998244353
q = int(input())

s = deque()
s.append(1)

result = 1
for i in range(q):
    query = list(map(int, input().split()))
    if query[0] == 1:
        s.append(query[1])
        result = (result * 10 + query[1]) % MOD
    elif query[0] == 2:
        top = s.popleft()
        result = result - (top * pow(10, len(s))) % MOD
        result = (result) % MOD
    elif query[0] == 3:
        print(result % MOD)