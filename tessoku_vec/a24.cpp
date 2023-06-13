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
constexpr long long INF = 1000000000;
int n,m;

int main(){
    cin>>n>>m;
    vector<vector<int>>a(m+1,vector<int>(n+3));
    for(int i=1;i<=m;i++)for(int j=1;j<=n;j++){
        cin>>a[i][j];
    }
    vector<vector<long long>>dp(m+1,vector<long long>((1<<n),INF));
    vector<int>already(n+1);
    dp[0][0]=0;
    for(int i=1;i<=m;i++){
        for(int j=0;j<(1<<n);j++){
            for(int k=1;k<=n;k++){
                if(j/(1<<(k-1))%2==0)already[k]=0;
                else already[k]=1;
            }
            int v=0;
            for(int k=1;k<=n;k++){
                if(already[k]==1||a[i][k]==1)v+=(1<<(k-1));
            }
            dp[i][j]=min(dp[i][j],dp[i-1][j]);
            dp[i][v]=min(dp[i][v],dp[i-1][j]+1);
        }

    }
    if(dp[m][(1<<n)-1]==INF)cout<<"-1"<<endl;
    else cout<<dp[m][(1<<n)-1]<<endl;
    return 0;
}