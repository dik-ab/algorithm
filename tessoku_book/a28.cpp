#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)


int main(){
    ll n,a[100009];
    char t[100009];
    cin>>n;
    rep(i,n)cin>>t[i]>>a[i];
        ll ans=0;
    rep(i,n){
        if(t[i]=='+'){
            ans+=a[i];
        }
        if(t[i]=='-')ans-=a[i];
        if(t[i]=='*')ans*=a[i];
        if(ans<0)ans+=10000;
        ans%=10000;
        cout<<ans<<endl;
    }
    return 0;
}