n = int(input())
s = input()

answer = False
for i in range(n-2):
    if s[i] == 'R' and s[i+1] == 'R' and s[i+2] == 'R':
        answer = True
    if s[i] == 'B' and s[i+1] == 'B' and s[i+2] == 'B':
        answer = True
        
if answer == True:
    print("Yes")
else:
    print("No")