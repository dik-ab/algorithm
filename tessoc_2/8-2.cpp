#include <iostream>
#include <string>
#include <queue>
using namespace std;

int q;
int QT[100009];
string x[100009];
queue<string> T;

int main()
{
    cin >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> QT[i];
        if (QT[i] == 1)
            cin >> x[i];
    }
    for (int i = 1; i <= q; i++)
    {
        if (QT[i] == 1)
            T.push(x[i]);
    }
}