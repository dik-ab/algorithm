n = int(input())

a = [0] * 2 + list(map(int, input().split()))

g = [[] for _ in range(n+1)]

for i in range(2, n+1):
    g[a[i]].append(i)
    
dp = [0] * (n+1)
for i in range(n,0,-1):
    for j in g[i]:
        dp[i] += (dp[j] + 1)
    
print(*dp[1:])