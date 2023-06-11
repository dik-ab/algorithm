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
ll mod=2147483647;
int n,q,l[200009],r[200009],t[200009],tr[200009];
string s;
ll hash[200009],hashr[200009],power100[200009];

ll getfroml(int l, int r){
    ll val=h[r]-(h[l-1]*power100[r-l+1]%mod);
    if(val<0)val+=mod;
    return val;
}
ll getfromr(int l,int r){
    int truel=n+1-r;
    int truer=n+1-l;
    ll val=hashr[truer]-(hashr[truel-1]*power100[truer-truel+1]%mod);
}

int main()
{
    cin>>n>>q;
    cin>>s;
    rep(i,q)cin>>l[i]>>r[i];
    sr=s
    reverse(s.begin(),s.end());
    power100[0]=0;
    rep(i,n)power[i]=power[i-1]*100LL%mod;
    hash[0]=0;
    rep(i,n){
        t[i]=s[i-1]-'a';
        tr[i]=sr[i-1]-'a';
    }
    rep(i,n)hash[i]=(hash[i-1]*100LL + t[i])%mod;
    hashr[0]=0;
    rep(i,n)hashr[i]=(hashr[i-1]*100LL+t[i])%mod;
    rep(i,q){
        ll v1=hashfroml(l[i],r[i]);
        ll v2=hashfromr(l[i],r[i]);
    }
    return 0;
}