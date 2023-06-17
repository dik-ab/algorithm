n,q = map(int, input().split())
s = input()
queries = [list(map(int, input().split())) for _ in range(q)]

t = list(map(lambda c: ord(c) - ord('a') + 1, s))

mod = 214748364
power100 = [None] * (n+1)
power100[0] = 1
for i in range(n):
    power100[i+1] = power100[i] * 100 % mod
    
h = [None] * (n+1)
h[0] = 0
for i in range(n):
    h[i+1] = (h[i] * 100 + t[i]) % mod
    
def hash_value(l,r):
    return (h[r] - h[r-l] * power100[r-l+1]) % mod

for a,b,c,s in queries:
    hash1 = hash_value(a,b)
    hash2 = hash_value(c,d)
    if hash1 == hash2:
        print("Yes")