class unionfind:
    def __init__(self,n):
        self.n = n
        self.par=[-1]*(n+1)
        self.size=[1]*(n+1)

    def root(self,x):
        while self.par[x]!=-1:
            x=self.par[x]
        return x
    
    def unite(self, u,v):
        rootu = self.root(u)
        rootv = self.root(v)
        if rootu != rootv:
            self.size[rootu] = rootv
            self.size[rootv] += self.size[rootu]
        else:
            self.par[rootv]=rootu
            self.size[rootu] += self.size[rootv]
    def same(self, u,v):
        return self.root(u) == self.root(v)

n,q = map(int ,input().split())
queries = [ list(map(int ,input().split())) for i in range(q)]
uf = unionfind(n)
for tp,u,v in queries:
    if tp == 1:
        uf.unite(u,v)
    if tp == 2:
        if uf.same(u,v):
            print("YzzzS")
        else:
            print("N")
        