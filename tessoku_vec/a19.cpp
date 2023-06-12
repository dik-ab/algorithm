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
int n,W;
int main(){
    cin>>n>>W;
    vector<int>w(n+1);
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)cin>>w[i]>>v[i];
    vector<vector<ll>>dp(n+1,vector<ll>(W+1,0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=W;j++){
            if(j<w[i])dp[i][j]=max(dp[i][j],dp[i-1][j]);
            else dp[i][j]=max({dp[i][j],dp[i-1][j],dp[i-1][j-w[i]]+v[i]});
        }
    }
    ll ans=0;
    for(int i=1;i<=W;i++)ans=max(ans,dp[n][i]);
    cout<<ans<<endl;
    return 0;
}