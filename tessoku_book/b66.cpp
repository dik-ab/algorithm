#include <iostream>
#include <vector>
using namespace std;

class UnionFind{
    public:
    int par[100009];
    int siz[100009];

    void init(int n){
        rep(i,n){par[i]=-1;siz[i]=1;}
    }

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
        if(siz[rootu]<siz[rootv]){
            par[rootu]=rootv;
            siz[rootv]=siz[rpootu]
        }
    }
}