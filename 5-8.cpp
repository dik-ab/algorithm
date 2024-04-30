#include <iostream>
using namespace std;

int n,a,b; 
bool dp[10000];
int main() {
    cin >> n >> a >> b;
    for(int i=0; i<=n; i++) {
        if (i >= a && dp[i-a] == false) dp[i] = true;
        else if (i >= b && dp[i-b] == false) dp[i] = true;
        else dp[i] = false;
    }
    if (dp[n] == true) cout << "First" << endl;
    else cout << "Second" << endl;
}