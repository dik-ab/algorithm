from collections import deque

n = int(input().split())
s = deque()

for i in range(n):
    q = list(input().split())
    if q[0] == '1':
        s.append(q[1])
    if q[0] == '2':
        print(s[-1])
    if q[0] == '3':
        s.pop()