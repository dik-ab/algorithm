n,w = map(int, input().split())
w = [0 for _ in range(n)]
v = [0 for _ in range(n)]

for i in range(n):
    w[i],v[i] = map(int, input().split())

dp = [[10**-15 for _ in range(w+1)] for _ in range(n+1)]

dp[0][0] = 0

for i in range(1,n+1):
    for j in range(0,w+1):
        if j < w[i]:
            dp[i][j] = dp[i-1][j]
        else:
            dp[i][j] = max(dp[i-1][j], dp[i-1][j - w[i]] + v[i])
            
print(max(dp[n]))