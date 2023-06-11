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
int n;
int main()
{
    cin>>n;
    int l=1;
    int r=n;
    while(r>l){
        int m=(l+r)/2;
        cout<<"?"<<" "<<m<<endl;
        int ans;
        cin>>ans;
        if(ans==0)l=m+1;
        else r=m;
    }
    cout<<"!"<<" "<<l-1<<endl;

    return 0;
}