def sum(l,r,s):
    return s[r+1]-s[l]

n,k = map(int, input().split())
a = list(map(int, input().split()))

s = [0] * (n+1)
for i in range(1,n+1):
    s[i] = s[i-1] + a[i-1]
    
r = [None] * n

for i in range(n):
    if i==0:
        r[i] = -1
    else:
        r[i] = r[i-1]
    
    while r[i] < n-1 and sum(i, r[i]+1, s) <= k:
        r[i] += 1
        
answer = 0
for i in range(n):
    answer += (r[i]-i+1)
print(answer)