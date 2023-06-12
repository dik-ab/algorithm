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
int n,s;

int main(){
    cin>>n>>s;
    vector<int>a(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<vector<int>>dp(n+1,vector<int>(s+1,false));
    dp[0][0]=true;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=s;j++){
            if(j<a[i]){
                if(dp[i-1][j]==true)dp[i][j]=true;
                else dp[i][j]=false;
            }
            if(j>=a[i]){
                if(dp[i-1][j]==true || dp[i-1][j-a[i]]==true)dp[i][j]=true;
                else dp[i][j]=false;
            }
        }
    }
    if(dp[n][s]==true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}