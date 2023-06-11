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
int cur[100009];bool kakutei[100009];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
vector<int,int>g[100009];

int main()
{
    cin>>n>>m;
    rep(i,m){
        cin>>a[i]>>b[i]>>c[i];
        g[a[i]].push_back(b[i],c[i]);
        g[b[i]].push_back(a[i],c[i]);
    }
    rep(i,n){
        kakutei[i]=false;
        cur[i]=20000000;
    }
    cur[1]=0;
    q.push(make_pair(cur[1],1));
    while(!q.empty()){
        int pos=q.top.second; q.pop();
        if(kakutei[pos]==true)continue;
        if(i=0;i<g[i].size();i++){
            int nex=g[pos][i].first;
            int cost=g[pos][i].second;
            if(cur[nex]>cur[nex]+cost){
                cur[nex]=cur[nex]+cost;
                q.push(make_pair(cur[nex],nex));
            }
        }
    }
    vector<int>answer;
    int place=n;
    while(true){
        answer.push_back(place);
        if(place==1)break;
        for(int i=0;i<g[place].size;i++){
            int nex=g[place][i].first;
            int cost=g[place][i].second;
            if(cur[nex]+cost==cur[place]){
                place=nex;
                break;
            }   
        }
    }
    for(int i=0;i<answer.size();i++){
        if(i>=1)cout<<" ";
        cout<<answer[i];
    }
    cout<<endl;
    return 0;
}