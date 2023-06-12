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
    vector<int>p(n+2);
    vector<int>a(n+2);
    vector<vector<int>>dp(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++)cin>>p[i]>>a[i];
    for(int len=n-2;len>=0;len--){
        for(int l=1;l<=n-len;l++){
            int r=l+len;
            int score1=0;
            if(l<=p[l-1]&&p[l-1]<=r)score1=a[l-1];
            int score2=0;
            if(l<=p[r+1]&&p[r+1]<=r)score2=a[r+1];
            if(l==1){
                dp[l][r]=dp[l][r+1]+score2;
            }
            else if(r==n)dp[l][r]=dp[l-1][r]+score1;
            else dp[l][r]=max(dp[l-1][r]+score1,dp[l][r+1]+score2);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)ans=max(ans, dp[i][i]);
    cout<<ans<<endl;
    return 0;
}