from collections import deque

s = deque()
n = int(input())
for i in range(n):
    q = list(input().split())
    if q[0] == '1':
        s.append(q[1])
    if q[0] == '2':
        print(s[0])
    if q[0] == '3':
        s.popleft()


