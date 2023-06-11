import re

n,s = input(), input()
print('in' if re.search('\|.*\*.*\|', s) else 'out')