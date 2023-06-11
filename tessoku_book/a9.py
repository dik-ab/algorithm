h,w,n = map(int, input().split())

b = [[0 for _ in range(w+2)] for _ in range(h+2)]
z = [[0 for _ in range(w+2)] for _ in range(h+2)]
for i in range(n):
    a,b,c,d = map(int, input().split())
    b[a][b] += 1
    b[a][d] -= 1
    b[c+1][b] -= 1
    b[c+1][d+1] += 1
    
for i in range(1,h+1):
    for j in range(1, w+1):
        z[i][j] = z[i-1][j] + b[i][j]

for j in range(1, w+1):
    for i in range(1, h+1):
        z[i][j] = z[i-1][j] + z[i][j]
        
for i in range(1,h+1):
    for j in range(1,w+1):
        if j>=2:
            print(" ", end="")
            print(z[i][j], end="")
        print("")