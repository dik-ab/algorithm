#include <iostream>
#include <algorithm>
using namespace std;

int n,k;
int a[10000], b[10000],c[10000],d[10000];
int x[10000], y[100000];
int main() {
    cin >> n >> k;
    for(int i=1; i<=n; i++) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    for(int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            x[(i-1)*n+j] = a[i]+b[j];
        }
    }
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            y[(i-1) * n + j] = c[i] + d[j];
        }
    }
    sort(y + 1, y + (n*n) + 1);
    for (int i=1; i<=n*n; i++) {
        int pos1 = lower_bound(y + 1, y+(n*n) + 1, k-x[i]) - y;
        if (pos1 <= n*n && y[pos1] == k-x[i]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}