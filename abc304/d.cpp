#include <bits/stdc++.h>
#include "atcoder/all"
using namespace std;
using mint = atcoder::modint998244353;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
ll w,h,n,a,b;
int main()
{
    cin>>w>>h;
    cin>>n;
    vector<ll>p(n);
    vector<ll>q(n);
    for(int i=0;i<n;i++)cin>>p[i]>>q[i];
    cin>>a;
    vector<ll>A(a+1);
    for(int i=0;i<a;i++){
        cin>>A[i];
    }
    cin>>b;
    vector<ll>B(b+1);
    for(int i=0;i<b;i++)cin>>B[i];
    A[a]=w;
    B[b]=h;
    map<pair<ll,ll>,ll>mp;
    for(int i=0;i<n;i++){
        ll x=*lower_bound(A.begin(),A.end(),p[i]);

        ll y=*lower_bound(B.begin(),B.end(),q[i]);
        mp[{x,y}]++;
    }
    ll m=n,M=0;
    for(auto p:mp)M=max(M,p.second);
    if(mp.size()==(a+1)*(b+1)){
        for(auto p:mp)m=min(m,p.second);
    }
    else m=0;
    cout<<m<<" "<<M<<endl;
    return 0;
}