#include <iostream>
using namespace std;

int t[1000000];
int a[1000000];

int main() {
    int n;
    cin >> n;
    long long ans = 0;

    for(int i=1; i<=n; i++) {
        cin >> t[i] >> a[i];
        if (t[i] == '+') {
            ans += a[i];
            ans %= 10000;                                                                                                                                 
            cout << ans << endl; 
        } else if (t[i] == '-') {
            ans -= a[i];
            if (ans < 0) ans += 10000;       
            ans %= 10000;
            cout << ans << endl;
        } else if (t[i] == '*') {
            ans *= a[i];
            ans %= 10000;
            cout << ans << endl;
        }
    }
    return 0;
}