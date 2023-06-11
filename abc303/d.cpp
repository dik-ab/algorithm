#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;

ll x,y,x;
string s;

int main(){

    cin>>x>>y>>z;
    cin>>s;
    vector dp(s.size()+1,vector<ll>(2,INF));
    dp[0][0]=0;
    chmin(dp[i][0],dp[i][1]+z);
    chmin(dp[i][1],dp[i][0]+z);

    if(s[i]=='a'){
        chmin(dp[i+1][0],dp[i][0]+x);
        chmin(dp[i+1][1],dp[i][1]+y);
    }
    else{
        chmin(dp[i+1][0],dp[i][0]+y);
        chmin(dp[i+1][1],dp[i][1]+x);
    }
    cout<<min(dp[s.size()][0],dp[s.size()][1])<<endl;
    return 0;
}

