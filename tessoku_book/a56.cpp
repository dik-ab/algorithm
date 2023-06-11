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


   ll n,q;
    string s;
    ll a[200009],b[200009],c[200009],d[200009];
    ll mod=2147483647;
    ll t[200009],h[200009];
    ll power100[200009];

ll hash_value(int l,int r){
    ll val=h[r]-(h[l-1]*power100[r-l+1]%mod);
    if(val<0)val+=mod;
    return val;
}

int main(){
    cin>>n>>q;
    cin>>s;
    rep(i,n)t[i]=s[i-1]-'a'+1;
    power100[0]=1;
    rep(i,n)power100[i]=100LL*power100[i-1]%mod;
    h[0]=0;
    rep(i,n)h[i]=(100LL*h[i-1]+t[i])%mod;
    rep(i,q){
        ll hash1=hash_value(a[i],b[i]);
        ll hash2=hash_value(c[i],d[i]);
        if(hash1==hash2)cout<<"Yes"<<endl;
    }
}