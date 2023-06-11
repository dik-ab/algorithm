n,k =map(int, input().split())
a = list(map(int, input().split()))

r = [0 for _ in range(n)]

for i in range(n-1):
    if i==0:
        r[i] = 0
    else:
        r[i] = r[i-1]
    
    while r[i] < n-1 and a[r[i] + 1] - a[i] <= k:
        r[i] += 1
        

answer = 0
for i in range(n-1):
    answer += (r[i]-i)
print(answer)
    