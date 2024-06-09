#include <iostream>
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

int n, q;
int q[100009], u[100009], v[100009];
UnionFind UF;
int main()
{
  cin >> n;
  UF.init(n);
  return 0;
}