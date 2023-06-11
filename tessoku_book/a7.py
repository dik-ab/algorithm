d = int(input())
n = int(input())

b = [0 for _ in range(d+2)]

for _ in range(n):
    l,r = map(int, input().split())
    b[l] += 1
    b[r+1] -= 1

answer = [0 for _ in range(d+2)]
for i in range(1, d+1):
    answer[i] = answer[i-1] + b[i]
    
for i in range(1,d+1):
    print(answer[i])
