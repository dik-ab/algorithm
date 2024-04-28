#include <iostream>
using namespace std;

int main() {
    int n,q;
    int a[109];
    int l[1000], r[1000];
    cin >> n >> q;
    for (int i=0; i<n; i++) cin >> a[i];
    
    for (int i=0; i<q; i++) cin >> l[i] >> r[i];
    int s[10000];
    s[0] = 0;
    for (int i=1; i<n; i++ )s[i] = s[i-1] + a[i];
    for (int i=0; i<n; i++) {
        cout << s[r[i]] - s[l[i-1]] << endl;
    } 
}