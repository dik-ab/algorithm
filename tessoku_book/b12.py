n = int(input())

l = 0.0
r = 100.0
m = (l+r) // 2.0

def f(x):
    return x*x*x + x

count = 0
while r - l > 0.00001: 
   
    if f(m) > float(n):
        r = m
        m = (l+r) / 2 
    if f(m) <= n:
        l = m
        m = (l+r) / 2

print(l)
        
