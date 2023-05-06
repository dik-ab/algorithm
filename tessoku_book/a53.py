import heapq

q = int(input())

t = []
for i in range(q):
    query = list(input().split())
    if q[0] == '1':
        heapq.heappush(t, int(q[1]))
    if q[0] == '2':
        print(t[0])
    if q[0] == '3':
        heapq.heappop(t)

#heapqの最小値は0インデックスでとれるが、2番目以降ないことに注