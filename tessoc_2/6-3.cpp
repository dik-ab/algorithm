#include <iostream>
using namespace std;

int d,n;
int l[10000], r[10000], h[100009];
int main() {
    cin >> d >> n;
    for(int i=1; i<=n; i++) {
        cin >> l[i] >> r[i] >> h[i];
    }
    int limit[10009];
    for(int i=1; i<=n; i++) {
        limit[i] = 24
    }
    for(int i=1; i<=n; i++) {
        for(int j=l[i]; j<=r[i]; j++) limit[j] = min(limit[j], h[i]);
    }
    int ans = 0;
    for(int i=1; i<=n; i++) ans += limit[i];
    cout << ans << endl;
}