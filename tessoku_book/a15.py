import bisect

n = int(input())
a = list(map(int, input().split()))

t = list(set(a))
t.sort()
b = [None] * n

for i in range(n):
    b[i] = bisect.bisect_left(t, a[i])
    b[i] += 1
    
answer = [str(i) for i in b]
print(" ".join(answer))