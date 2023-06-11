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
int h,w;

int main()
{
    cin>>h>>w;
    vector<vector<int>>x(h+1,vector<int>(w+1,0));
    rep1(i,h){
        rep1(j,w){
            cin>>x[i][j];
        }
    }
    vector<vector<int>>z(h+1,vector<int>(w+1,0));
    rep1(i,h)rep1(j,w)z[i][j]=z[i][j-1]+x[i][j];
    rep1(j,w)rep1(i,h)z[i][j]=z[i-1][j]+z[i][j];
    int q;
    cin>>q;
    rep(i,q){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<z[c][d]+z[a-1][b-1]-z[a-1][d]-z[c][b-1]<<endl;
    }
    return 0;
}