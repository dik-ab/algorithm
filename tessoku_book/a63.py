from collections import deque
g = [[0] for _ in range(3)]


dist = [-1] * (3)
dist[1] = 0

q = deque()
q.append(1)

while len(q) >= 1:
    pos = q.popleft()
    for i in range(g[pos]):
        if dist[i] == -1:
            dist[i] = dist[pos] + 1
            q.append(i)