s = input()
t = input()
n = len(s)
m = len(t)

dp = [[None] * (m+1) for _ in range(n+1)]
dp[0][0] = 0
for i in range(0, n+1):
    for j in range(0, m+1):
        if i>=1 and j >=1 and s[i-1] == t[j-1]:
            dp[i][j] = dp[i-1][j-1] + 1
        elif i>= 1 and j >= 1:
            dp[i][j] = max(dp[i-1][j] , dp[i][j-1])
        elif i>=1:
            dp[i][j] = dp[i-1][j]
        elif j>=1:
            dp[i][j] = dp[i][j-1]
            
print(dp[n][m])