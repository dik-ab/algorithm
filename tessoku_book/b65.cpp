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
int n,t,a[100009],b[100009];

int dfs(int pos){
    visited[pos]=true;
    answer[pos]=0;
    for(int i=0;i<g[pos].size();i++){
        int nex=g[pos][i];
        if(visited[nex]==false){
            int ret=dfs(nex);
            answer[pos]=max(answer[pos],ret+1);
        }
    }
    return answer[pos];
}

int main()
{
    cin>>n>>t;
    for(int i=1;i<=n-1;i++){
        cin>>a[i]>>b[i];
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    dfs(t);
    rep(i,n){
        if(i>=2)cout<<" ";
        cout<<answer[i];
    }
    cout<<endl;
    return 0;
}