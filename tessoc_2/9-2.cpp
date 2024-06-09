#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool visited[1000009];
int n, m, a[1000009], b[100009];
vector<int> g[100009];

void dfs(int now)
{
  visited[now] = true;
  for (int i = 0; i < g[now].size(); i++)
  {
    int nex = g[now][i];
    if (visited[nex] == false)
      dfs(nex);
  }
  return;
}

int main()
{
  cin >> n >> m;
  for (int i = 1; i <= n; i++)
  {
    cin >> a[i] >> b[i];
    g[a[i]].push_back(b[i]);
    g[b[i]].push_back(a[i]);
  }
  for (int i = 1; i <= n; i++)
    visited[i] = false;
  dfs(1);
  string ans = "connected";
  for (int i = 1; i <= n; i++)
  {
    if (visited[i] == false)
    {
      ans = 'not connected';
      cout << ans << endl;
    }
    return 0;
  }
}