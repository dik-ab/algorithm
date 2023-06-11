n = int(input())
a = list(map(int, input().split()))
d = int(input())
l = [0 for _ in range(d)]
r = [0 for _ in range(d)]

max_list = [None] * n
max_list[0] = a[0]
for i in range(1,n):
    max_list[i] = max(max_list[i-1], a[i])
    
max_right = [None] * n
max_right[n-1] = a[n-1]

for i in reversed(range(0, n-1)):
    max_right[i] = max(max_right[i+1], a[i])

for i in range(d):
    l,r = map(int, input().split())
    print(max(max_list[l-2], max_right[r]))