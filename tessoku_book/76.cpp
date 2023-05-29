#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

//ll mod=2147483647;
const ll mod=10000007;
ll n,w,l,r,x[150009];
int dp[150009],sum[150009];

int main()
{
    cin>>n>>w>>l>>r;
    rep(i,n)cin>>x[i];
    x[0]=0;
    x[n+1]=w;
    dp[0]=1;sum[0]=1;
    rep(i,n+1){
        int posl=lower_bound(x,x+n+2,x[i]-r)-x;
        int posr=lower_bound(x,x+n+2,x[i]-l+1)-x-1;
        if(posr==-1)dp[i]=0;
        else dp[i]=sum[posr];
        if(posl>=1)dp[i]-=sum[posl-1];
        dp[i]=(dp[i]+mod)%mod;
        sum[i]=sum[i-1]+dp[i];
        sum[i]%=mod;
    }
    cout<<dp[n+1]<<endl;
    return 0;
}