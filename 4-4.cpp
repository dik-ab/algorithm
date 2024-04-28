#include <iostream>
#include <algorithm>
using namespace std;
long long n,W;
long long dp[109][100000000009];
long long w[10000],v[1000009];
int main() {
    cin >> n >> W;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=W; j++) dp[i][j] = -1000000000000LL;
    }
    dp[0][0] = 0;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=W; j++) {
            if (j < w[i]) dp[i][j] = dp[i-1][j];
            else if (j >= w[i]) dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
        }
    }
    long long answer = 0;
    for(int i=1; i<=W; i++) {
        answer = max(answer, dp[n][W]);                                                                                                                                                                                                                                                             
    }
    cout << answer << endl;
}