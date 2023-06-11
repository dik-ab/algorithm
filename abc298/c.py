n = int(input())
q = int(input())

box = [[] for i in range(n+1)]
card = [[] for i in range(2*10**5+1)]

for i in range(q):
    Q = list(map(int, input().split()))
    if Q[0] == 1:
        i,j=Q[1:]
        box[j].append(i)
        card[i].append(j)
        
    if Q[0] ==2:
        i = Q[1]
        box[i].sort()
        print(*box[i])
    if Q[0] == 3:
        i = Q[1]
        card[i].sort()
        print(*set(card[i]))