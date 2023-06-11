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
bool visited[100009];

void dfs(int n){
    visited[pos]=true;
    for(int i=0;i<g[n].size();i++){
        int nex=g[n][i];
        if(visited[nex]==false)dfs(nex);
    }
}

int main()
{
    cin>>n>>m;
    rep(i,m){
        cin>>a[i]>>b[i];
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    rep(i,n)visited[i]=false;
    string answer="aaaa";
    rep(i,n){
        if(visited[i]==false)answer="bbb";
    }
    cout<<answer<<endl;
    return 0;
}