from collections import deque
q = int(input())
queries = [input().split() for _ in range(q)]
t = deque()
for q in queries:
    if q[0] == "1":
        t.append(q[1])
    if q[0] == "2":
        print(t[0])
    if q[0] == "3":
        t.popleft()



