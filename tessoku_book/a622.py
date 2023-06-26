import sys
sys.setrecursionlimit(12000)

def dfs(pos,g,visited):
    visited[pos]=True
    for i in g[pos]:
        if visited[i] == False:
            dfs(i,g,visited)

n,m = map(int ,input().split())
edges = [list(map(int,input().split())) for i in range(m)]

g = [list() for i in range(n+1)]
for a,b in edges:
    g[a].append(b)
    g[b].append(a)
    
visited = [False]*(n+1)
dfs(1,g,visited)

answer = True
for i in range(1,n+1):
    if visited[i]==False:
        answer = False
        
if answer == True:
    print('true')
else:
    print('false')
            

