class point2d:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def dist(self, p):
        return ((self.x - p.x)**2 + (self.y-p.y) ** 2) ** 0.5
    
def play_greedy(n, points):
    current_place = 0
    visited = [False] * n
    visited[0] = True
    p = [0]
    for _ in range(1,n):
        mindist = 10 ** 19
        min_id = -1
        for j in range(n):
            if not visited[j] and mindist > points[current_place].dist(points[j]):
                mindist = points[current_place].dist(points[j])
                min_id = j
        visited[min_id] = True
        p.append(min_id)
        current_place = min_id
    p.append(0)
    return p

n = int(input())
points = [0 for _ in range(n)]

for i in range(n):
    x,y = map(int, input().split())
    points[i] = point2d(x,y)
    
answer = play_greedy(n, points)

for i in answer:
    print(i+1)
                