n,t = map(int, input().split())
c = list(map(int, input().split()))
r = list(map(int, input().split()))

playert = set()
player1 = set()
color1=c[0]

for i in range(n):
    if c[i] == t:
        playert.add(r[i])
    elif c[i] == color1:
        player1.add(r[i])

if playert == set():
    print(r.index(max(player1))+1)
else:
    print(r.index(max(playert))+1)