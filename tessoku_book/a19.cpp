#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    ll N,W,w[109],v[109],dp[109][1000000000009];
    cin>>N>>W;
    rep(i,N)cin>>w[i]>>v[i];
    rep0(i,N)rep0(j,W)dp[i][j]=-10000;
    dp[0][0]=0;

    rep(i,N)rep0(j,W){
        if(j<w[i]){
            dp[i][j]=dp[i-1][j];
        }
        else{
            dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i-1][j]);
        }
    }
    ll ans=0;
    rep0(i,W)ans=max(ans,dp[N][i]);
    cout<<ans<<endl;
    return 0;
}