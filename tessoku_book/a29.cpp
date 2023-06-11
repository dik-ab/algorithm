#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

ll a,b;
const int mod=1000000007;

int main(){
    cin>>a>>b;
    ll ans=1;
    ll p=a;
    for(int i=0;i<=29;i++){
        ll wari=(1<<i);
        if((b/wari)%2==1)ans=(ans*p)%mod;
        p=(p*p)%mod;
    }
    cout<<ans<<endl;
    return 0;
}