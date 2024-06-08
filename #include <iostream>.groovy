#include <iostream>
using namespace std;

int n,s;
int a[10009];
bool dp[70][10009];

int main() {
    cin >> n >> s;
    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }
    dp[0][0] = true;
    for(int i=1; i<=s; i++) dp[0][i] = false;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=s; j++) {
            if(j < a[i] == true){
                if (dp[i-1][j]) dp[i][j] = true;
                else dp[i][j] = false;
            }
            else if (j >= a[i] == true) {
                if (dp[i-1][j] == true || dp[i-1][j-a[i]] == true) dp[i][j] = true;
                else dp[i][j] = false;
            }
        }
    }
    if (dp[n][s] == true) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
}