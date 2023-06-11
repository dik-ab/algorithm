from collections import deque

n,m = map(int, input().split())
a = list(map(int, input().split()))
actions = [list(map(lambda x: int(x)-1, input().split())) for _ in range(m)]

start = sum(a[i]*(2**i) for i in range(n))
goal = 2**n-1

dist = [-1] * (2**n)
dist[start] = 0
q = deque()
q.append(start)

while len(q)>=1:
    pos = q.popleft()
    for x,y,z in actions:
        nex = pos^(1<<x)^(1<<y)^(1<<z)
        if dist[nex] == -1:
            dist[nex] = dist[pos] + 1
            q.append(nex)

print(dist[goal])