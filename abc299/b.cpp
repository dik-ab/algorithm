#include <bits/stdc++.h>
#include <atcoder/all>
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
int n,t;
vector<int>c;
vector<int>r;

int main()
{
    cin>>n>>t;
    vector<int>c(n);
    vector<int>r(n);
    for(int i=0;i<n;i++)cin>>c[i];
    for(int i=0;i<n;i++)cin>>r[i];
    pair<int,int>tmax={-1,-1},lmax={-1,-1};
    for(int i=0;i<n;i++){
        if(c[i]==t)tmax=max(tmax,{r[i],i+1});
        if(c[i]==c[0])lmax=max(lmax,{r[i],i+1});
    }
    if(tmax.first!=-1)cout<<tmax.second<<endl;
    else cout<<lmax.second<<endl;
    return 0;
}