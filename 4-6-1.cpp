#include <iostream>
using namespace std;

int n,p[10000],a[20000];
int dp[20000][200000];
int main() {
    cin >> n;
    for(int i=1; i<=n; i++) cin >> p[i] >> a[i];
    dp[1][n] = 0;
    for(int LEN = n-2; LEN >= 0; LEN--) {
        for(int l = 1; l <=n-LEN; l++) {
            int r = l + LEN;
        }
    }
    int score1 = 0;
    if (l<=p[l-1] && p[l-1]<=r) score1 = a[l-1];

    int score2 = 0;
    if (l <= p[r + 1] && p[r+1] <= r) score2 = a[r+1];

    if (l==1) dp[l][r] = dp[l][r+1] + score2; else if (r == 1) dp[l][r] = dp[l-1][r] + score1 else dp[l][r] = max(dp[l-1][r]+score1, dp[i][r+1]+score2)

    int ans=0;
    for(int i=1; i<=n; i++) ans = max(ans, dp[i][i]);
    cout << ans << endl;
    return 0;
}