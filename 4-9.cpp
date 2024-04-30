#include <iostream>
#include <algorithm>
using namespace std;

int n;
int a[100000];
int LEN=0, L[100009];
int dp[100000];
int main() {
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) {
        int pos = lower_bound(L+1, L+n+1, a[i]) - L;
        dp[i] = pos;
        L[dp[i]] = a[i];
        if(dp[i] > LEN) LEN +=1;
    }   
    cout << LEN << endl;
    return 0;                                                                                              
}