N=int(input())
deg=[0]*N
for _ in range(N-1):
  a,b=map(int,input().split())
  deg[a-1]+=1
  deg[b-1]+=1

cnt=[0]*N
for x in deg: cnt[x]+=1
print(cnt)

ans=[]
vs=0
for i,x in enumerate(cnt):
  if i>=3:
    vs+=(i+1)*x
    ans+=[i]*x
    print(ans)

ans=[2]*((N-vs)//3)+ans
print(ans)
print(*ans)
