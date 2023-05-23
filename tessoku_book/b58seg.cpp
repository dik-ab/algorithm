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
class Segment{
    public:
    int dat[300009],siz=1;
    
    void init(ll n){
        while(siz<n)siz*=2;
        for(int i=1;i<2*siz;i++)dat[i]=0;
    }

    void update(ll pos, ll x){
        pos=pos+siz-1;
        dat[pos]=x;
        while(pos>=2){
            pos/=2;
            dat[pos]=min(dat[pos*2],dat[pos*2+1]);
        }
    }

    ll calc(ll l,ll r,ll a,ll b,ll u){
        if(l>=b || r<=a)return 1000000;
        if(l<=a && b<=r)return dat[u];
        ll m=(a+b)/2;
        ll ansL=calc(l,r,a,m,u*2);
        ll ansR=calc(l,r,m,b,u*2+1);
        return min(ansL,ansR);
    }

}
Segment z;

int main()
{
    cin>>n>>l>>r;
    rep(i,n)cin>>x[i];
    Z.init(n);
    dp[1]=0;
    Z.update(1,0);
    for(int i=2;i<=n;i++){
        posL=lower_bound(x,x+n+1,x[i]-r)-x;
        posR=lower_bound(x,x+n+1,x[i]-l+1)-x-1;
        dp[i]=Z.calc(posL,posR+1,1,Z.siz+1,1)+1;
        Z.update(i,dp[i]);
    }
    return 0;
}