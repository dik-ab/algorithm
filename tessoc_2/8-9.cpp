#include <iostream>
#include <algorithm>
using namespace std;

class SegmentTree
{
public:
    int dat[2000000], siz = 1;

    void init(int n)
    {
        siz = 1;
        while (siz < n)
            siz *= 2;
        for (int i = 1; i < siz * 2; i++)
            dat[i] = 0;
    }

    void update(int pos, int x)
    {
        pos = pos + siz - 1;
        dat[pos] = x;
        while (pos >= 2)
        {
            pos /= 2;
            dat[pos] = dat[pos * 2] + dat[pos * 2 + 1];
        }
    }

    int query(int l, int r, int a, int b, int u)
    {
        if (r <= a || b <= l)
            return 0;
        if (l <= a && b <= r)
            return dat[u];
        int m = (a + b) / 2;
        int answerl = query(l, r, a, m, u * 2);
        int answerr = query(l, r, m, b, u * 2 + 1);
        return answerl + answerr;
    }
};

int n, q;
int Query[100009], pos[100009], x[109999], l[100009], r[100009];
SegmentTree Z;

int main()
{
    cin >> n >> q;
    Z.init(n);
    for (int i = 1; i <= q; i++)
    {
        cin >> Query[i];
        if (Query[i] == 1)
        {
            cin >> pos[i] >> x[i];
            Z.update(pos[i], x[i]);
        }
        if (Query[i] == 2)
        {
            int answer = Z.query(l[i], r[i], 1, Z.siz + 1, 1);
            cout << answer << endl;
        }
    }
    return 0;
}