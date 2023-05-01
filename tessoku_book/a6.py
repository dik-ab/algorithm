n,q = map(int, input().split())
a = [0] + list(map(int, input().split())) 


sum_list = [0 for _ in range(n+1)]

for i in range(1, n+1):
    sum_list[i] = a[i] + sum_list[i-1]
    
    
for _ in range(q):
    l,r = map(int, input().split())
    print(sum_list[r] - sum_list[l-1])