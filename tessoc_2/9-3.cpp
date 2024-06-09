#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m, a[100009], b[100009];
vector<int> g[100009];
int dist[100009];
queue<int> q;

int main()
{
  cin >> n >> m;
  for (int i = 1; i <= m; i++)
  {
    cin >> a[i] >> b[i];
  }
  for (int i = 1; i <= n; i++)
    dist[i] = -1;
  q.push(1);
  dist[1] = 0;
  while (!q.empty())
  {
    int pos = q.front();
    q.pop();
    for (int i = 0; i < g[pos].size(); i++)
    {
      int to = g[pos][i];
      if (dist[to] == -1)
      {
        dist[to] = dist[pos] + 1;
        q.push(to);
      }
    }
  }
  for (int i = 1; i <= n; i++)
    cout << dist[i] << endl;
  return 0;
}