#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000], b[1000]
    int dp[10000];
    for(int i=2; i<=n; i++) {
        cin >> a[i]
    }
    for(int j=3; j<=n; j++) {
        cin >> b[j]
    }
    dp[1] = 0;
    dp[2] = a[i];
    for(int i=3; i<=n; i++) min(dp[i-1] + a[i], dp[i-2] + b[i]);
    cout << dp[n] << endl;
}