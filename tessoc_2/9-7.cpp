#include <iostream>
#include <vector>
using namespace std;

class UnionFind
{
public:
  int par[100009];
  int siz[100009];

  void init(int n)
  {
    for (int i = 1; i <= n; i++)
    {
      siz[i] = 1;
      par[i] = -1;
    }
  }
  int root(int x)
  {
    while (true)
    {
      if (par[x] == -1)
        break;
      x = par[x];
    }
    return x;
  }
  void unite(int u, int v)
  {
    int ru = root(u);
    int rv = root(v);
    if (ru == rv)
      return;
    if (siz[ru] > siz[rv])
    {
      par[ru] = rv;
      siz[rv] = siz[ru] + siz[rv];
    }
    else
    {
      par[rv] = ru;
      siz[ru] = siz[ru] + siz[rv];
    }
  }
  bool same(int u, int v)
  {
    if (root(u) == root(v))
      return true;
    else
      return false;
  }
};
int n, m;
int a[100009], b[100009], c[100009];
UnionFind UF;

int main()
{
  cin >> n >> m;
  for (int i = 1; i <= m; i++)
    cin >> a[i] >> b[i] >> c[i];
  vector<pair<int, int>> Edge;
  for (int i = 1; i <= m; i++)
    Edge.push_back(make_pair(c[i], i));
  UF.init(n);
  sort(Edge.begin(), Edge.end());
  int ans = 0;
  for (int i = 0; i < Edge.size(); i++)
  {
    int idx = Edge[i].second;
    if (UF.same(a[idx], b[idx]) == false)
    {
      UF.unite(a[idx], b[idx]);
      ans += c[idx];
    }
  }
  cout << ans << endl;
  return 0;
}