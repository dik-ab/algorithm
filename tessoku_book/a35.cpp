#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,a[100009];
int dp[2009][2009];

int main(){
    cin>>n;
    rep(i,n)cin>>a[i];
    rep(i,n)dp[n][i]=a[i];
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=i;j++){
            if(i%2==0)dp[i][j]=min(dp[i+1][j],dp[i+1][j+1]);
            else dp[i][j]=max(dp[i+1][j],dp[i+1][j+1]);
        }
    }    
    cout<<dp[1][1]<<endl;
    return 0;
}