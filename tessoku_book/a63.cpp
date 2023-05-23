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
int n,m,a[100009],b[100009];
vector<int>g[100009];
int dist[100009];
queue<int>q;

int main()
{
    cin>>n>>m;
    rep(i,m){
        cin>>a[i]>>b[i];
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
        dist[i]=-1;
    }
    q.push(1);
    dist[1]=0;
    while(q.empty()){
        int pos=q.front();q.pop();
        for(int j=0;j<g[i].size();j++){
            int to=g[pos][i];
            if(dist[to]==-1){
                dist[to]=dist[pos]+1;
                q.push(to);
            }
        }
    }
    rep(i,n)cout<<dist[i]<<endl;
    return 0;
}