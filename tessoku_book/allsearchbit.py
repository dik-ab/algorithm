n,k = map(int, input().split())
a = list(map(int, input().split()))

sum = 0
answer = False
for i in range(2 ** n):
    for j in range(n):
        wari = 2 ** j
        if((i // wari) % 2 == 1): 
            sum += a[j]
    if sum == k:
        print("Ye")
        exit()
        
        