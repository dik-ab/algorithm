n = int(input())

map = {}

for i in range(n):
    q = list(input().split())
    if q[0] == '1':
        map[q[1]] = q[2]
    if q[0] == '2':
        print(map[q[1]])