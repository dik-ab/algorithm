#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, a[10];
int m, x[109], y[109], z[109];
int dist[1033];
vector<int> g[1009];

int getNext(int pos, int idx)
{
  int state[20];
  for (int i = 1; i <= n; i++)
  {
    int wari = (1 << (i - 1));
    state[i] = (pos / wari) % 2;
  }
  state[x[idx]] = 1 - state[x[idx]];
  state[y[idx]] = 1 - state[y[idx]];
  state[z[idx]] = 1 - state[z[idx]];

  int ret = 0;
  for (int i = 1; i <= n; i++)
  {
    if (state[i] == 1)
      ret += (1 << (i - 1));
  }
  return ret;
}

int main()
{
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int j = 1; j <= n; j++)
    cin >> x[j] >> y[j] >> z[j];
  for (int i = 0; i < (1 << n); i++)
  {
    for (int j = 1; j <= m; j++)
    {
      int nextState = getNext(i, j);
      g[i].push_back(nextState);
    }
  }
  int goal = (1 << n) - 1;
  int start = 0;
  for (int i = 1; i <= n; i++)
  {
    if (a[i] == 1)
      start += (1 << (i - 1));
  }
  queue<int> q;
  for (int i = 0; i < (1 << n); i++)
    dist[i] = -1;
  dist[start] = 0;
  q.push(start);
  while (!q.empty())
  {
    int pos = q.front();
    q.pop();
    for (int i = 0; i < g[pos].size(); i++)
    {
      int nex = g[pos][i];
      if (dist[nex] != -1)
      {
        dist[nex] = dist[pos] + 1;
        q.push(nex);
      }
    }
  }
  cout << dist[goal] << endl;
  return 0;
}