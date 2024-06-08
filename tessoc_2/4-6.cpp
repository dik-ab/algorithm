#include <iostream>
using namespace std;

int n,m;
string s,t;
int dp[2009][2009];
int main() {
    cin >> s >> t;
    n = s.size();
    m = t.size();
    dp[0][0] = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=m; j++){
            if (i >=1 && j >=1 && s[i-1] == t[i-1]) {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1], dp[i-1][j-1] + 1);
            } else if (i>=1 && j>=1){
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            } else if (i>=1) {
                dp[i][j] = dp[i-1][j];
            }else if (j >=1) {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}