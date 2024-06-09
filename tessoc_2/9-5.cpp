#include <iostream>
#include <vector>
using namespace std;

int n, a[100009], dp[1000009];
vector<int> g[100009];

int main()
{
  cin >> n;
  for (int i = 2; i <= n; i++)
  {
    cin >> a[i];
    g[a[i]].push_back(i);
  }
  for (int i = n; i >= 1; i--)
  {
    dp[i] = 0;
    for (int j = 0; j < g[i].size(); j++)
      dp[i] += (dp[g[i][j]] + 1);
  }
  for (int i = 1; i <= n; i++)
  {
    if (i >= 2)
      cout << " ";
    cout << dp[i];
  }
  cout << endl;
  return 0;
}