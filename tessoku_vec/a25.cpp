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
ll h,w;
int main(){
    cin>>h>>w;
    vector<vector<ll>>dp(h+1,vector<ll>(w+1,0));
    dp[1][1]=1;
    vector<vector<char>>c(h+1,vector<char>(w+1));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            cin>>c[i][j];
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
              if(i>=2&&c[i-1][j]=='.'){
                dp[i][j]+=dp[i-1][j];
              }
              if(j>=2&&c[i][j-1]=='.')dp[i][j]+=dp[i][j-1];
            }
        }
    
    cout<<dp[h][w]<<endl;
    return 0;
}