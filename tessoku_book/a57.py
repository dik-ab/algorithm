N, Q = map(int, input().split())
A = list(map(int, input().split()))
queries = [ list(map(int, input().split())) for i in range(Q) ]

levels = 2
dp = [[None] * N for i in range(levels)]
for i in range(0, N):
    dp[0][i] = A[i] - 1
    
for d in range(1, levels):
    for i in range(0,N):
        dp[d][i] = dp[d-1][dp[d-1][i]]
        
for x,y in queries:
    current_place = x-1
    for d in range(29,-1,-1):
        if ((y >> d)) & 1 == 1:
            current_place = dp[d][current_place]
        print(current_place + 1)