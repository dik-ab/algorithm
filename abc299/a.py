n=int(input())
s = input()

v_bar = []
asterisk = 0

for i in range(n):
    if s[i] == '|':
        v_bar.append(i)
    if s[i] == '*':
        asterisk = i
    
if v_bar[0] < asterisk < v_bar[1]:
    print("i")
else:
    print("out")