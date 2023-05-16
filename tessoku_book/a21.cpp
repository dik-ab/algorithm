#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,p[2009],a[2009],scorel,scorer;
int dp[2009][2009];

int main(){
    cin>>n;
    rep0(i,2008)rep0(j,2008)dp[i][j]=0;
    dp[1][n]=0;
    rep(i,n)cin>>p[i]>>a[i];
    for(int i=1;i<=n;i++)for(int j=n;j>=1;j--){
        scorer=0;
        scorel=0;
        if(i>=2 && i<=p[i-1]&& p[i-1]<=j )scorel=a[i-1];
        if(j<=n-1 && i<=p[j+1]&&p[j+1]<=j)scorer=a[j+1]; 
        if(i==1)dp[i][j]=dp[i][j+1]+scorer;
        else if(j==n)dp[i][j]=dp[i-1][j]+scorel;
        else dp[i][j]=max(dp[i-1][j]+scorel,dp[i][j+1]+scorer);
    }
    int answer=0;
    rep(i,n)answer=max(answer,dp[i][i]);
    cout<<answer<<endl;
    return 0;
}