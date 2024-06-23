#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge
{
  int to, cap, rev;
};

class MaximumFlow
{
public:
  int size = 0;
  bool used[500];
  vector<Edge> g[500];
  void init(int n)
  {
    size = n;
    for (int i = 0; i <= size; i++)
      g[i].clear();
  }

  void add_edge(int a, int b, int c)
  {
    int current_a = g[a].size();
    int current_b = g[b].size();
    g[a].push_back(Edge{b, c, current_b});
    g[b].push_back(Edge{a, 0, current_a});
  }

  int dfs(int pos, int goal, int F)
  {
    if (pos == goal)
      return F;
    used[pos] = true;
    for (int i = 0; i < g[pos].size(); i++)
    {
      if (g[pos][i].cap == 0)
        continue;
      if (used[g[pos][i].to] == true)
        continue;
      int flow = dfs(g[pos][i].to, goal, min(F, g[pos][i].cap));
      if (flow >= 1)
      {
        g[pos][i].cap -= flow;
        g[g[pos][i].to][g[pos][i].rev].cap += flow;
        return flow;
      }
    }
    return 0;
  }

  int max_flow(int s, int t)
  {
    int total = 0;
    while (true)
    {
      for (int i = 0; i <= size; i++)
        used[i] = false;
      int F = dfs(s, t, 1000000);
      if (F == 0)
        break;
      total += F;
    }
    return total;
  }
};