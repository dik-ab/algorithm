n = int(input())
a = list(list(map(int, input().split())) for i in range(n))
b = list(list(map(int, input().split())) for i in range(n))

count = []
for i in range(n):
    for j in range(n):
        if a[i][j] == 1:
            count.append([i,j])

if len(count) == 0:
    print("Yes")
    exit()
    
for i in range(4):
    count_same = 0
    for j in range(len(count)):
        x,y = count[j][0], count[j][1]
        if b[x][y] == 1:
            count_same += 1
        if count_same == len(count) and j == len(count) -1:
            print("yes")
            exit()
        count[j] = [y, n-1-x]

print("No")

n = int(input())
a = list(list(map(int, input().split())) for i in range(n))
b = list(list(map(int, input().split())) for i in range(n))

for _ in range(4):
    if all(a[i][j] <= b[i][j] for i in range(n) for j in range(n)):
         True
    a = [list(a)[::-1] for a in zip(*a)]
