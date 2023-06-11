#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll n,r;

ll Power(ll a,ll b,ll m){
    ll ans=1,p=a;
    for(int i=0;i<=29;i++){
        ll wari=(1<<i);
        if((b/wari)%2==1)ans=(ans*p)%m;
        p=(p*p)%m;
    }
    return ans;
}

ll Division(ll a,ll b,ll m){
    return (a * Power(b,m-2,m))%m;
}

int main(){
    cin>>n>>r;
    ll a=1;
    rep(i,n)a=(a*i)%m;
    ll b=1;
    rep(i,r)b=(b*i)%m;
    rep(i,n-r)b=(b*i)%m;
    cout<<Division(a,b,m)<<endl;
    return 0;
}