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
int n,m,a[100009],b[100009],c[100009];
vector<pair<int,int>>g[100009];
int cur[100009];bool kakutei[100009];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;


int main()
{
    cin>>n>>m;
    rep(i,m){
        cin>>a[i]>>b[i]>>c[i];
        g[a[i]].push_back(make_pair(b[i],c[i]));
        g[b[i]].push_back(make_pair(a[i],c[i]));
    }
    rep(i,n){
        kakutei[i]=false;
        cur[i]=200000;
    }
    cur[1]=0;
    q.push(make_pair(cur[1],1));
    while(!q.empty()){
        int pos=q.top.second();q.pop();
        if(kakutei[pos]==true)continue;
        kakutei[pos]=true;
        for(int i=0;i<g[pos].size();i++){
            int nex=g[pos][i].first:
            int cost=g[pos][i].second;
            if(cur[nex]>cur[pos]+cost){
                cur[nex]=cur[pos]+cost;
                q.push(cur[nex],nex);
            }
        }
    }
    rep(i,n){
        if(cur[i]==200000)cout<<"-1"<<endl;
        else cout<<cur[i]<<endl;
    }
    return 0;
}