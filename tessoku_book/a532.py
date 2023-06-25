import heapq

q =int(input())
queries = [input().split() for _ in range(q)]

t = []
for q in queries:
    if q[0]=='1':
        heapq.heappush(t, int(q[1]))
    if q[0] == '2':
        print(t[0])
    if q[0] == '3':
        heapq.heappop(t)
