#include <iostream>
using namespace std;

long long h, w;
int c[109][109]
int main() {
    cin >> h >> w;
    for(int i=1; i<=h; i++) {
        for(int j=1; j<=w; j++) {
            cin >> c[i][j];
        }
    }
    int dp[100][100];
    for(int i=1; i<=h; i++) {
        for(int j=1; j<=w; j++) {
            if (i == 1 && j ==1 ) dp[i][j] = 1;
            else {
                if (i >= 2 && c[i][j] == '.') dp[i][j] += dp[i-1][j]
                if (j >= 2 && c[i][j] == '.') dp[i][j] += dp[i][j-1];
            }
        }
    }
    cout << dp[h][w] << endl;
}