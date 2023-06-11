n = int(input())
a = list(map(int,input().split()))

answer = False
for i in range(n):
    for j in range(i+1, n):
        for k in range(j+1, n):
            if a[i] + a[j] + a[j] == 1000:
                answer = True

if answer == True:
    print("Yes")
else:
    print("No")
