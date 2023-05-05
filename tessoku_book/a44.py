n,q = map(int, input().split())
state = 1
e = [0 for _ in range(n+2)]

for i in range(1, n+1):
    e[i] = i
    
for i in range(q):
    query = list(map(int,input().split()))
    
    if query[0] == 1:
        x = query[1]
        y = query[2]
        if state == 1:
            e[x] = y
        if state == 2:
            e[n+1-x] = y
            
    if query[0] == 2:
        if state == 1:
            state = 2
        else:
            state= 1
            
    if query[0] == 3:
        x = query[1]
        if state == 1:
            print(e[x])
        if state == 2:
            print(e[n+1-x])