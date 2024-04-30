#include <iostream>
using namespace std;

int n,a[1000000];
int main() {
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    int dp[20009][20009];
    for(int j=1; j<=n; j++) dp[n][j] = a[j];
    for(int i=n-1; i>=1; i--) {
        for(int j=1; j<=i; j++) {
            if (i%2 == 0) dp[i][j] = min(dp[i+1][j], dp[i+1][j+1]);
            else dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]);
        }
    }
    cout << dp[1][1] << endl;
    return 0;
}