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
int n,d;

int main()
{
    cin>>n;
    vector<int>a(n+1);
    vector<int>maxl(n+1);
    vector<int>maxr(n+1);

    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>d;
    vector<int>l(d+1);
    vector<int>r(d+1);
    for(int i=1;i<=d;i++){
        cin>>l[i]>>r[i];
    }
    maxl[0]=0;
    maxr[0]=0;
    for(int i=1;i<=n;i++){
        maxl[i]=max(maxl[i-1],a[i]);
    }
    for(int i=n;i>=1;i--){
        maxr[n-i+1]=max(maxr[n-i],a[i]);
    }
    for(int i=1;i<=d;i++){
        cout<<max(maxl[l[i]-1],maxr[n-r[i]])<<endl;
    }
    return 0;
}