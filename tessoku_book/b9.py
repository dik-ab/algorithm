n = int(input())
sum_list = [[0 for _ in range(1502)] for _ in range(1502)]
z = [[0 for _ in range(1502)] for _ in range(1502)]

for i in range(n):
    a,b,c,d = map(int, input().split())
    z[a][b] += 1
    z[c][d] += 1
    z[c][b] -= 1
    z[a][d] -= 1
    
for i in range(1501):
    for j in range(1501):
        sum_list[i][j] = sum_list[i][j-1] + z[i][j]
    
s = 0

for j in range(1501):
    for i in range(1501):
        sum_list[i][j] = sum_list[i-1][j] + sum_list[i][j]
        if sum_list[i][j] >= 1:
            print(sum_list[i][j])
            s += 1
            
print(s)
