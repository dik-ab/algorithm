#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll n,m,b;
int a[200009],c[200009];

int main(){
    cin>>n>>m>>b;
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>c[i];
    ll d=0;
    ll e=0;
    ll f=0; 
    rep(i,n)d+=a[i];
    d*=m;
    rep(i,m)e+=c[i];
    e*=n;
    f=b*n*m;
    cout<<d+e+f<<endl;
    return 0;
}