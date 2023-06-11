n = int(input())
a = [0] + list(map(int, input().split()))
b = [0,0] + list(map(int, input().split()))

dp = [0 for _ in range(n)]

for i in range(1,n):
    if i == 1:
        dp[i] = dp[0] + a[1]
    else:   
        dp[i] = min(dp[i-1]+a[i], dp[i-2]+b[i])
        
print(dp[n-1])