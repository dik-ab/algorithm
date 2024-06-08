#include <iostream>
using namespace std;

int main()
{
    int n, q, a, b, c;
    int e[n];
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        e[i] = i;
    int state = 1;
    for (int i = 1; i <= q; i++)
    {
        cin >> a;
        if (a = 1)
        {
            cin >> b >> c;
            if (state = 1)
                e[b] = c;
            if (state = 2)
                e[b + 1 - n] = c;
        }
        if (a = 2)
        {
            if (state = 1)
                state = 2;
            else
                state = 1;
        }
        if (a = 3)
        {
            cin >> b;
            if (state == 1)
                cout << e[b] << endl;
            else
                cout << e[n + 1 - b] << endl;
        }
    }
}