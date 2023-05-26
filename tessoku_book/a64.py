import heapq

n,m = map(int, input().split())

g = [[0] for _ in range(n+1)]

for i in range(m):
    a,b,c = map(int, input().split())
    g[a].append((b,c))
    g[b].append(a,c)
INF = 10 * 10
kakutei = [False] * (n+1)
cur = [INF] * (n+1)
cur[1] = 0
q = []
heapq.heappush(q, (cur[1],1))

while len(q) >= 2:
    pos = heapq.heappop(q)[1]
    if kakutei[pos] == True:
        continue
    kakutei[pos] = True
    for e in g[pos]:
        if cur[e[0]] > cur[pos] + e[1]:
            cur[e[0]] = cur[pos] + e[1]
            heapq.heppush(q, (cur[e[0]], e[0]))

for i in range(1, n+1):
    if cur[i] != INF:
        print(cur[i])
    else:
        print("-1")
        
        
        
n = int(input().split())


        