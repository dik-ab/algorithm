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
int a,b,c,d;
int h,w,n;
int main()
{
    cin>>h>>w>>n;
    vector<vector<int>>x(h+2,vector<int>(w+2,0));
    for(int i=0;i<n;i++){
        cin>>a>>b>>c>>d;
        x[a][b]+=1;
        x[c+1][b]-=1;
        x[a][d+1]-=1;
        x[c+1][d+1]+=1;
    }
    vector<vector<int>>z(h+2,vector<int>(w+2,0));
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            z[i][j]=z[i][j-1]+x[i][j];
        }
    }
    for(int j=1;j<=w;j++){
        for(int i=1;i<=h;i++){
            z[i][j]=z[i-1][j]+z[i][j];
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(j>=2)cout<<" ";
            cout<<z[i][j];
        }
        cout<<endl;
    }
    return 0;
}