n = int(input())
s = input()

ans = 0
ma_l = 0
ma_r = n-1
cnt = 0
for i in range(n):
    if s[i] == 'o':
        if cnt == 0:
            l = i
        cnt += 1
    else:
        if ans < cnt:
            ans = cnt
            ma_l = l
            ma_r = i-1
        cnt = 0

if ans < cnt:
    ans = cnt
    ma_l = l
    ma_r = i
    
if ma_l != 0 or ma_r != n-1:
    print(ans)
    exit()
print(-1)

print(max(map(len, s.split('-'))) if 'o' in s and '-' in s else -1)