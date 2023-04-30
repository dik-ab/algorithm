n = int(input())
x = [0 for i in range(n+1)]
y = [0 for i in range(n+1)]

for i in range(n):
    x[i], y[i] = map(int, input().split())

q = int(input())

s = [[0 for _ in range(1501)] for _ in range(1501)]
for i in range(n):
    s[x[i]][y[1]] += 1
    
t = [[0 for _ in range(1501)] for _ in range(1501)]
for i in range(1, 1501):
    for j in range(1, 1501):
        t[i][j] = t[i][j-1] + s[i][j]
    
for j in range(1, 1501):
    for i in range(1, 1501):
        t[i][j] = t[i-1][j] + t[i][j]
        
for i in range(q):
    a,b,c,d = map(int, input().split())
    print(t[c][d] + t[a-1][b-1] - t[a-1][d] - t[c][b-1])
