#include <iostream>
using namespace std;

int n, q, a[100009], x[100009], y[100009];
int dp[32][100009];

int main()
{
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int j = 1; j <= n; j++)
        cin >> x[j] >> y[j];

    for (int i = 1; i <= n; i++)
        dp[0][i] = a[i];
    for (int i = 1; i <= 29; i++)
    {
        for (int j = 1; j <= n; j++)
            dp[i][j] = dp[i - 1][dp[i - 1][j]];
    }
    for (int i = 1; i <= n; i++)
    {
        int current = x[i];
        for (int j = 29; j >= 0; j--)
        {
            if ((y[i] / (1 << j) % 2 != 0))
                current = dp[j][current];
        }
        cout << current << endl;
    }
}