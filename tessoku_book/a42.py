def count(i,j,k,a,b):
    cnt = 0
    for u in range(n):
        if i <= a[u] and a[u] <= i+k and j<=b[u] and b[u] <= k+j:
            cnt += 1
    return cnt
    
n,k = map(int, input().split())

a = [0 for _ in range(n)]
b = [0 for _ in range(n)]

for i in range(n):
    a[i],b[i] = map(int, input().split())

score = 0
for i in range(1,101):
    for j in range(1, 101):
        score = max(score, count(i,j,a,b,k))
        