n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))

dp = [-(10**9) for _ in range(n+1)]
dp[1] = 0

for i in range(1, n):
    dp[a[i-1]] = max(dp[a[i-1]], dp[i] + 100)
    dp[b[i-1]] = max(dp[b[i-1]], dp[i]+ 150)

print(dp[n])


