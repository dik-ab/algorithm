n,t = map(int, input().split())
c = [0] + list(map(int, input().split()))
r = [0] + list(map(int, input().split()))

ans = 0

if t in set(c):
    color = t
else:
    color = c[1]

for i in range(1, n+1):
    if c[i] == color and r[ans] < r[i]:
        ans = i
        
print(ans)


