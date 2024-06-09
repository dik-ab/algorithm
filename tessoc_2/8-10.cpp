#include <iostream>
#include <stack>
using namespace std;

int n, a[20009];
int answer[200009];
stack<pair<int, int>> level2;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (i >= 2)
        {
            level2.push(make_pair(i - 1, a[i - 1]));
            while (!level2.empty())
            {
                int kabuka = level2.top().second;
                if (kabuka <= a[i])
                    level2.pop();
                else
                    break;
            }
        }
        if (!level2.empty())
            answer[i] = level2.top().first;
        else
            answer[i] = -1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (i >= 2)
            cout << " ";
        cout << answer[i];
    }
    cout << endl;
    return 0;
}