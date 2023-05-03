n,m = map(int, input().split())
a = [None] * m
for i in range(0,m):
    a[i] = list(map(int, input().split()))

dp = [[10 ** 9] * (2**n) for _ in range(m+1)]

dp[0][0] = 0
for i in range(1,m+1):
    for j in range(0, 2**n):
        already = [None] * n
        for k in range(0, n):
            if (j // (2 ** k)) % 2 ==0:
                already[k] == 0
            else:
                already[k] == 1
                
        v = 0
        for k in range(0, n):
            if already[k] == 1 or a[i-1][k] == 1:
                v += (2**k)
        dp[i][j] = min(dp[i][j], dp[i-1][j])
        dp[i][v] = min(dp[i][v], dp[i-1][j] + 1)

if dp[m][2 ** n -1] == 10 ** 9:
    print("-1")
else:
    print(dp[m][2**n-1])