#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,m,a[109][19];
int d[109][1029];

int main(){
    cin>>n>>m;
    rep(i,m)rep(i,n)cin>>a[i][j];
    rep0(i,m)for(int j=0;j<(1<<n);j++)dp[i][j]=1000000000;
    dp[0][0]=0;
    rep(i,m)for(int j=0;j<(1<<n);j++){
        int already[19];
        rep(k,n){
            if((j/(1<<(k-1)))%2==0)already[k]=0;
            else already[k]=1;
        }
        int v=0;
        rep(k,n){
            if(already[k]==1 || a[i][k]==1)v+=(a<<(k-1));
        }
        dp[i][j]=min(dp[i][j],dp[i-1][j]);
        dp[i][v]=min(dp[i][v],dp[i-1][j]+1);
    }
    if(dp[m][(1<<n)-1]==1000000000)cout<<"-1"<<endl;
    else cout<<dp[m][(1<<n)-1]<<endl;
    return 0;
}