n = int(input())
p = [0 for _ in range(n+1)]
a = [0 for _ in range(n+1)]

for i in range(n):
    p[i+1],a[i+1] = map(int,input().split())
    
dp = [[0 for _ in range(n+2)] for _ in range(n+2)]

dp[1][n] = 0

for r in reversed(range(1, n+1)):
    for l in range(1, n+1):
        scorel = 0
        if l >= 2 and l <= p[l-1] and p[l-1] <= r:
            scorel = a[l-1]
            
        scorer = 0
        if r <= n-1 and l <= p[r+1] and p[r+1] <= r:
            scorer = a[r+1]
        
        if l == 1:
            dp[l][r] = dp[l][r+1] + scorer
        elif r == n:
            dp[l][r] = dp[l-1][r] + scorel
        else:
            dp[l][r] = max(dp[l-1][r] + scorel, dp[l][r+1] + scorer)

answer = 0
for i in range(1,n+1):
    answer = max(answer, dp[i][i])

print(answer)