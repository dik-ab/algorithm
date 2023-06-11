class maxflow_edge:
    def __init__(self, to,cap,rev):
        self.to = to
        self.cap = cap
        self.rev = rev
        
    
def dfs(pos, goal, F, G, used):
    if pos == goal:
        return F
    used[pos] = True
    for e in G[pos]:
        if e.cap > 0 and not used[e.to]:
            flow = dfs(e.to, goal, min(F, e.cap), G, used)
            if flow >= 1:
                e.cap -= flow
                G[e.to][e.rev].cap += flow
                return flow
    return 0

