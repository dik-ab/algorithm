#include <iostream>
using namespace std;

int n, l;
int a[200000], b[200000];
int main()
{
    cin >> n >> l;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 'E')
        {
            ans = max(ans, l - a[i]);
        }
        else
        {
            ans = max(ans, a[i]);
        }
    }
    cout << ans << endl;
    return 0;
}