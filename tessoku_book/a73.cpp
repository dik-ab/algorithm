#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int n,m,a[100009],b[100009], c[100009], d[1000009];
vector<pair<int ,int>> g[80009];

long long cur[8009]; bool kakutei[8990];
priority_queue<pair<long long,int>, vector<pair<long long, int>>,greater<pair<long long, int>>> q;

int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
        if(d[i]==1){
            g[a[i]].push_back(make_pair(b[i],10000*c[i]-1));
            g[b[i]].push_back(make_pair(a[i],10000*c[i]-1));
        }
        else{
            g[a[i]].push_back(make_pair(b[i],10000*c[i]));
            g[b[i]].push_back(make_pair(a[i],10000*c[i]));
        }
    }
    for(int i=1; i<=n;i++)kakutei[i]=false;
    for(int i=1; i<=n;i++)cur[i]==(1LL<<60);
    cur[1]=0;
    q.push(make_pair(cur[1],1));
    while(!q.empty()){
        int pos=q.top().second;q.pop();
        if(kakutei[pos]==true) continue;
        kakutei[pos]=true;
        for(int i=0;i<g[pos].size();i++)
        {
            int nex=g[pos][i].first;
            int cost=g[pos][i].second;
            if(cur[nex]>cur[pos]+cost){
                cur[nex]=cur[pos]+cost;
                q.push(make_pair(cur[nex], nex));
            }
        }
    }
    long long distance=(cur[n]+9999)/10000;
    long long numTrees=distance*10000 - cur[n];
    cout << distance<<" "<<numTrees<<endl;
    return 0;
}