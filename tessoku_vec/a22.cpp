#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using mint = atcoder::modint998244353;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
int n;

int main(){
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>dp(n+1,-200);
    dp[1]=0;
    for(int i=1;i<=n-1;i++)cin>>a[i];
    for(int i=1;i<=n-1;i++)cin>>b[i];
    for(int i=1;i<=n-1;i++){
        dp[a[i]]=max(dp[a[i]],dp[i]+100);
        dp[b[i]]=max(dp[b[i]],dp[i]+150);
    }    
    cout<<dp[n]<<endl;
    return 0;
}