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
ll n,q,a[100009],x[100009],y[1000009];
ll dp[30][100009];

int main()
{
    cin>>n>>q;
    rep(i,n)cin>>a[i];
    reo(i,q){
        cin>>x[i]>>y[i];
    }
    rep(i,n)dp[0][i]=a[i];
    for(int i=1;i<=29;i++){
        rep(j,n){
            dp[i][j]=dp[i-1][dp[i-1][j]];
        }
    }
    rep(j,q){
        int current=x[j];
        for(int d=29;d>=0;d--){
            if((y[j]/(1<<d))%2==1)current=dp[d][current];
        }
        cout<<current<<endl;
    }
    return 0;
}