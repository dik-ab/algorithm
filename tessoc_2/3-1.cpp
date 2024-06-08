#include <iostream>
using namespace std;

int main () {
    int n,x;
    int a[10000];
    int pos = lower_bound(a+1, a+n+1, x)-a;
    if (pos<=n && a[pos]==x) cout << pos;
    else cout << -1;
}