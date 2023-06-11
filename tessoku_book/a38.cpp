#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int d,n;
int l[10009],r[10009],h[10009],lim[10009];

int main(){
    cin>>d>>n;
    rep(i,n)cin>>l[i]>>r[i]>>h[i];
    rep(i,d)lim[i]=24;
    rep(i,n){
        for(int j=l[i];j<=r[i];j++)lim[j]=min(lim[j],h[i]);
    }
    int ans=0;
    rep(i,d)ans+=lim[i];
    cout<<ans<<endl;
    return 0;
}