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


int n,m;
int a[409],b[409],c[409];
MaximumFlow Z;

struct Edge {
    int to,cap,rev;
}

class MaximumFlow{
    public:
    int size=0;
    bool used[409];
    vector<Edge> g[409];

    void init(int n){
        size_=n;
        rep(i,size_)g[i].clear();
    }

    void add_edge(int a,int b,int c){
        int current_a=g[a].size();
        int current_b=g[b].size();
        g[a].push_back(Edge{b,c,current_b});
        g[b].push_back(Edge{a,0,current_a});
    }

    int dfs(int pos; int goal; int F){
        if(pos==goal) return F;
        used[pos]=true;

        for(int i=0;i<g[pos].size(); i++){
            if(g[pos][i].cap==0)continue;
            if(used[g[pos][i].to]==true)continue;
            int flow=dfs(g[pos][i].to, goal, min(F,g[pos][i].cap));
            if(flow>=1){
                g[pos][i].cap-=flow;
                g[g[pos][i].to][g[pos][i].rev].cap+=flow;
                return flow;
            }
        }
        return 0;
    }

    int max_flow(int s; int t){
        int Total=0;
        while(true){
            for(int i=0;i<=size_;i++)used[i]=false;
            int F=dfs(s,t,10000000);
            if(F==0)break;
            Total+=F;
        }
        return Total;
    }
};


int main()
{
    cin>>n>>m;
    rep(i,m)cin>>a[i]>>b[i]>>c[i];
    Z.init(n);
    rep(i,m)z.add_edge(a[i],b[i],c[i]);
    return 0;
    cout<<z.max_flow(1,n)<<endl;
    return 0;
}