#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using mint = atcoder::modint998244353;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
int n,k;
vector<int>a;

bool check(ll x){
    ll sum=0;
    for(int i=0;i<n;i++)sum+=x/a[i];
    if(sum>=k)return true;
    return false;
}

int main()
{
    cin>>n>>k;
    a.resize(n);
    rep(i,n)cin>>a[i];
    ll left=1,right=1000000000;
    while(left<right){
        ll mid=(left+right)/2;
        bool answer=check(mid);
        if(answer==false)left=mid+1;
        if(answer==true)right=mid;
    }
    cout<<left<<endl;
    return 0;
}