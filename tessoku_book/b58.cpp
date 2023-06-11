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
int n,l,r,x[100009];
int dp[100009];

int main()
{
    cin>>n>>l>>r;
    rep(i,n)cin>>c[i];
    dp[1]=0;
    for(int i=2;i<=n;i++){
        int posL=lowerbound(x,x+n+1,x[i]-r)-x;
        int posR=lowerbound(x,x+n+1,x[i]-l+1)-x-1;
        dp[i]=1000000;
        for(int j=posL,j<=posR;j++)dp[i]=min(dp[i],dp[j]+1);
    }
    cout<<dp[n]<<endl;
    return 0;
}