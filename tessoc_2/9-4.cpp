#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n, m, a[100009], b[100009], c[100009];
vector<pair<int, int>> g[100009];
int cur[100009];
bool kakutei[100009];
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;

int main()
{
  cur[1] = 0;
  q.push(make_pair(cur[1], 1));
  while (!q.empty())
  {
    int pos = q.top().second;
    q.pop();
    if (kakutei[pos] == true)
      continue;
    kakutei[pos] = true;
    for (int i = 0; i < g[pos].size(); i++)
    {
      int nex = g[pos][i].first;
      int cost = g[pos][i].second;
      if (cur[nex] > cur[pos] + cost)
      {
        cur[nex] = cur[pos] + cost;
        q.push(make_pair(cur[nex], nex));
      }
    }
  }
  for (int i = 1; i <= n; i++)
  {
    if (cur[i] == 20000000)
      cout << "-1" << endl;
    else
      cout << cur[i] << endl;
  }
  return 0;
}