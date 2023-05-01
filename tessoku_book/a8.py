h,w = map(int, input().split())
x = [0 for i in range(h)]
z = [[0 for i in range(w+1)] for i in range(h+1)]
for i in range(h):
    x[i] = list(map(int, input().split()))
q = int(input())

for i in range(1, h+1):
    for j in range(1, w+1):
        z[i][j] = z[i][j-1] + x[i-1][j-1]

for j in range(1, w+1):
	for i in range(1, h+1):
		z[i][j] = z[i-1][j] + z[i][j]

for i in range(q):
    a,b,c,d = map(int, input().split())
    print(z[c][d] + z[a-1][b-1] - z[a-1][d] - z[c][b-1])

    