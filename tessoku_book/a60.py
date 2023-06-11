from collections import deque

n = int(input())
a = list(map(int, input().split()))

answer = [None] * n
level2 = deque()

for i in range(n):
    if i>=1:
        level2.append((i,a[i-1]))
        while len(level2) >= 1:
            kabu = level2[-1][1]
            if kabu <= a[i]:
                level2.pop()
            else:
                break
        if len(level2) >= 1:
            answer[i] = level2[-1][0]
        else:
            answer[i] = -1
            
print(*answer)
            
            