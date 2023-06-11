import bisect

def bit(a):
    sum_list = []
    for i in range(2 ** len(a)):
        sum = 0
        for j in range(len(a)):
            wari = (2**j)
            if (i // wari) % 2 == 1:
                sum += a[j]
        sum_list.append(sum)
    return sum_list

n,k = map(int, input().split())
a = list(map(int, input().split()))

l1 = a[0:(n//2)]
l2 = a[(n//2):n]

sum1 = bit(l1)
sum2 = bit(l2)
sum1.sort()
sum2.sort()

for i in range(len(sum1)):
    pos = bisect.bisect_left(sum2, k-sum1[i])
    if pos < len(sum2) and sum2[pos] == k-sum1[i]:
        print("Yes")
        exit()
        
print("No")

