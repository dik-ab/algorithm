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
int a[100009],b[100009],c[100009],d[100009];
bool kakutei[100009];
int cur[100009];
vector<int>g[100009];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;

int main()
{
    cin>>n>>m;
    rep(i,m){
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        if(d[i]==1){
            g[a[i]].push_back(make_pair(b[i], c[i]*10000-1));
            g[b[i]].push_back(make_pair(a[i], c[i]*10000-1));
        }
        else{
            g[a[i]].push_back(make_pair(b[i],c[i]*10000));
            g[b[i]].push_back(make_pair(a[i],c[i]*10000));
        }
    }
    rep(i,n){
        kakutei[i]=false;
        cur[i]=(1LL<<60);
    }
    cur[1]=0;
    kakutei[1]=true;
    q.push_back(make_pair(cur[1],1));
    while(!q.empty()){
        pos=q.top().second;q.pop();
        if(kakutei[pos]==true)continue;
        kakutei[pos]=true;
        for(int i=0;i<g[pos].size();i++){
            int nex=g[pos][i].first;
            int cost=g[pos][i].second;
            if(cur[nex]>cur[post]+cost){
                cur[nex]=cur[pos]+cost;
                q.push(make_pair(cur[nex],nex));
            }
        }
    }
    ll distance=(cur[n]+9999)/10000;
    ll numt=distance*10000-cur[n];
    cout<<distance<<" "<<numt<<endl;
    return 0;
}