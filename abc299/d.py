def interactive(x):
    print("?",x)
    return int(input())

n = int(input())

l,r = 1, n-1

while l<r:
    mid = (l+r+1) // 2
    out = interactive(mid)
    if out == 0:
        l = mid
    else:
        r = mid -1
print("!", l)