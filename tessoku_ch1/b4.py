n = int(input())

answer = 0
for i in range(len(n)):
    keta = 0
    kurai = (2 ** (len(n)-1-i))
    if n[i] == '1':
        keta = 1
    answer += keta * kurai
print(answer)