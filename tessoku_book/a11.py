n,x = map(int, input().split())
a = list(map(int, input().split()))

l=0
r=n-1
m = (l+r)//2

while r-l > 0:
    if x > a[m]:
        l = m+1
        m = (l+r)//2
    elif x <= a[m]:
        r = m
        m = (l+r)//2

print(l+1)
        