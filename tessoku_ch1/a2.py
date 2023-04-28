n,x = map(int, input().split())
a = list(map(int, input().split()))

if x in a:
    print("Yes")
    
answer = False

for i in range(n):
    if a[i] == x:
        answer = True
        
if answer:
    print("Yes")
        