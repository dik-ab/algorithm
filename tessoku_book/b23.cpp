#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,x[1009],y[1009];
double dp[1<<16][1009];

int main(){
    cin>>n;
    rep(i,n)cin>>x[i]>>y[i];
    dp[0][0]=0;
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if(dp[i][j]>=1000000000)continue;
            for(int k=0;k<n;k++){
                if((i/(1<<k))%2==1)continue;
                double dist=sqrt(1.0*(x[j]-x[k])*(x[j]-x[k])+1.0*(y[j]-y[k])*(y[j]-y[k]));
                dp[i+(1<<k)][k]=min(dp[i+(1<<k)][k],dp[i][j]+dist);
            }
        }
    }
    printf("%.12lf\n",dp[(1<<n)-1][0]);
    return 0;
}