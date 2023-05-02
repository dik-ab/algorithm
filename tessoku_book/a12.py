def check(x,N,K,A):
    sum = 0
    for i in range(N):
        sum += x // A[i]
        
    if sum >= K:
        return True
    return False

n,k = map(int, input().split())
a =list(map(int, input().split()))

left = 1
right = 10 ** 9
while right-left > 0:
    mid = (left + right)//2
    answer = check(mid,n,k,a)
    if answer == False:
        left = mid+1
    if answer == True:
        right = mid
        
print(right)
        
    