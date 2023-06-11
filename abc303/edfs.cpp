#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
using Graph=vector<vector<int>>;

void dfs(const Graph &G,int v,int p,int depth,vector<int> &res){
    if(depth%3==1)res[g[v].size()]+=1;
    for(auto v2:G[v]){
        if(v2==p)continue;
        dfs(G,v2,v,depth+1,res);
    }
}

int main()
{
    int n;
    cin>>n;
    Graph G(n);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        g[u-1].push_back(v);
        g[v-1].push_back(u);
    }
    int root=0;
    for(int v=0;v<n;v++)if(G[v].size()==1)root=v;
    vector<int> res(n,0);
    dfs(G,root,-1,0,res);
    for(int v=2;v<n;v++){
        if(res[v]){
            for(int i=0;i<res[v];i++)cout<<v<<" ";
        }
    }
    cout<<endl;
    return 0;
}