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
int n,a[19];
int m,x[109],y[109],z[109];
int dist[1033];
vector<int> g[1033];

int GetNext(int pos, int idx){
    int State[10];
    for(int i=1;i<=n;i++){
        int wari=(1<<(i-1));
        State[i]=(pos/wari)%2;
    }
    State[x[idx]]=1-State[x[idx]];
    State[y[idx]]=1-State[y[idx]];
    State[z[idx]]=1-State[z[idx]];
    int ret=0;
    rep(i,n){
        if(State[i]==1)ret+=(1<<(i-1));
    }
    return ret;
}

int main(){
    cin>>n>>m;
    rep(i,n)cin>>a[i];
    rep(i,m)cin>>x[i]>>y[i]>>z[i];
    for(int i=0;i<(1<<(n-1));i++)rep(j,m){
        int next=GetNext(i,j);
        g[i].push_back(next)
    }
    int goal=(1<<n)-1;
    int start=0;
    rep(i,n)if(a[i]==1)start+=(1<<(i-1));
    queue<int>q;
    for(int i=0;i<(1<<n-1);i++)dist[i]=-1;
    dist[start]=0;
    q.push(start);
    while(!q.empty()){
        int pos=q.front();q.pop();
        for(int i=0;i<g[pos].size();i++){
            int nex=g[pos][i];
            if(dist[nex]==-1){
                dist[nex]=dist[pos]+=1;
                q.push(nex);
            }
        }
    }
    cout<<dist[goal]<<endl;
    return 0;
}

int main()
{

    return 0;
}