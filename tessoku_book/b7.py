t = int(input())
n = int(input())
b = [0 for _ in range(t+2)]
answer = [0 for _ in range(t+1)]

for i in range(n):
    l,r = map(int, input().split())
    b[l] += 1
    b[r] -= 1

answer[0] = b[0]
for i in range(1, t+1):
    answer[i] = answer[i-1] + b[i]

for i in range(t):
    print(answer[i])
    
    

    


