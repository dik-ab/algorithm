#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

//ll mod=2147483647;

class UnionFine{
    public:
    int par[100009];
    int siz[100009];

    void init(int n){
        rep(i,n){
            par[i]=-1;
            siz[i]=1;
        }
    }
    int root(int x){
        if(par[x]!=-1)x=par[x];
        else return x;
    }

    void unit(int u,int b){
        int Rootu=root(u);
        int Rootv=root(v);
        if(Rootu=Rootv)return;
        if(siz[Rootu]>siz[RootV]){
            par[Rootv]=Rootu;
            siz[Rootu]+=siz[Rootv];
        }
        else{
            par[Rootu]=Rootv;
            siz[Rootv]+=siz[Rootu];
        }
    }

    bool same(int u,int v){
        if(root(u)==root(v))return true
        else false;
    }
}

int n,q;
int query[100009],u[100009],v[100009];

int main()
{
    cin>>n>>q;
    rep(i,q)cin>>query[i]>>u[i]>>v[i];
    UnionFind UF;
    UF.init(n);
    rep(i,q){
        if(query[i]==1)UF.unite(u[i],v[i]);
        if(query[i]==2){
            if(UF.same(u[i],v[i])==true)cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
        }
    }
    return 0;
}