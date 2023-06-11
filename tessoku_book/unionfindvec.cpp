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

class UnionFind{
    public:
        vector<int>siz;
        vector<int>par;
        UnionFind(int n):siz(n,1),par(n,-1){}

        int root(int x){
            while(true){
                if(par[x]==-1)break;
                x=par[x];
            }
            return x;
        }

        void unite(int u,int v){
            int rootu=root(u);
            int rootv=root(v);
            if(rootu==rootv)return;
            if(siz[rootu]>siz[rootv]){
                par[rootv]=rootu;
                siz[rootu]+=siz[rootv];
            }else{
                par[rootu]=rootv;
                siz[rootv]+=siz[rootu];
            }
        }

        bool same(int u,int v){
            if(root(u)==root(v))return true;
            return false;
    }
};

int n,q;

int main()
{
    cin>>n>>q;
    UnionFind UF(n);
    int query,u,v;
    for(int i=0;i<q;i++){
        cin>>query>>u>>v;
        if(query==1){    
            u--,v--;
            UF.unite(u,v);
        }
        else{
            u--,v--;
            bool ans=UF.same(u,v);
            if(ans==true){
                cout<<"Yes"<<endl;
            }else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}