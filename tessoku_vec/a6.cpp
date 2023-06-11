#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
int n,q;
int main()
{
    cin>>n>>q;
    vector<int>a(n+1);
    rep1(i,n)cin>>a[i];
    vector<int>sum(n+1);
    sum[1]=a[1];
    for(int i=2;i<=n;i++)sum[i]=sum[i-1]+a[i];
    rep(i,q){
        int l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
    return 0;
}