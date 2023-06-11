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

int main(){
    int n,m,k;
    cin>>n>>m;
    atcorder::dsu uf(n);
    for(int i=0;i<n;i++){
        int u,v;cin>>u>>v;
        u--,v--;
        uf.merge(u,v);
    }
    cin>>k;
    set<pair<int,int>>vis;
    for(int i=0;i<k;i++){
        int u,v;cin>>u>>v;
        u--,v--;
        u=uf.leader(u);
        v=uf.leader(v);
        vis.insert(minmax(u,v));
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int u,v;cin>>u>>v;
        u--,v--;
        u=uf.leader(u);
        v=uf.leader(v);
        cout<<(vis.find(minmax(u,v))!=vis.end()?"No\n":"Yes\n");
    }
    return 0;
}