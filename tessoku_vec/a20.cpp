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
string s;
string t;
int main(){
    cin>>s;
    cin>>t;
    vector<vector<int>>dp(s.size()+1,vector<int>(t.size()+1,0));
    for(int i=0;i<=s.size();i++)for(int j=0;j<=t.size();j++){
        if(i>=1&&j>=1&&s[i-1]==t[j-1]){
            dp[i][j]=max({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]+1});
        }
        else if(i>=1 && j>=1){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
        else if(i>=1){
            dp[i][j]=dp[i-1][j];
        }
        else if(j>=1){
            dp[i][j]=dp[i][j-1];
        }
    }
    cout<<dp[s.size()][t.size()]<<endl;
    return 0;
}