import random
class point2d:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def dist(self, p):
        return ((self.x - p.x) ** 2 + (self.y - p.y) ** 2) ** 0.5
    
def get_score(n, points, p):
    score = 0
    for i in range(n):
        score += points[p[i]].dist(points[p[i+1]])
    return score

def hill_clim(n, points):
    p = [i %n for i in range(n+1)]
    current_score = get_score(n, points, p)
    loop = 40000
    for i in range(loop):
        l = random.randint(1, n-1)
        r = random.randint(1,n-1)
        if l > r:
            l,r = r,l
        p[l:r+1] = reversed(p[l:r+1])
        new_score = get_score(n, points, p)
        if current_score >= new_score:
            current_score = new_score
        else:
            p[l:r+1] = reversed(p[l:r+1])
    return p

n = int(input())
points = [0 for _ in range(n)]
for i in range(n):
    x,y = map(int,input().split())
    points[i] = [point2d(x,y)]
    
answer = hill_clim(n,points)
for i in answer:
    print(i+1)
    