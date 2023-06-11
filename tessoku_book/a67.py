class unionfind:
    def __init__(self,n):
        self.n = n
        self.par = [-1] * (n+1)
        self.size = [1] * (n+1)
    
    def root(self, x):
        while self.par[x] != -1:
            x = self.par[x]
        return x
    
    def unite(self, u, v):
        rootu = self.root(u)
        rootv = self.root(v)
        if rootu != rootv:
            if self.size(rootu) < self.size(rootv):
                self.par[rootu] = rootv
                self.size[rootv] += self.size[rootu]

            else:
                self.par[rootv] = rootu
                self.size[rootu] += self.size[rootv]

    def same(self, u, v):
        return self.root(u) == self.root(v)

n,m = map(int, input().split())
g = [list(map(int, input().split())) for _ in range(m)]

g.sort(key = lambda x: x[2])
uf = unionfind(n)
answer = 0
for a,b,c in g:
    if not uf.same(a,b):
        uf.unite(a,b)
        answer += c
        
print(answer)