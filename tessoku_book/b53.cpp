#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

ll n,d;
ll x[200009],y[200009];
vactor<ll>g[200009];
ll answer=0;

int main()
{
    cin>>n>>d;
    rep(i,n){
        cin>>x[i]>>y[i];
        g[x[i]].push_back(y[i]);
    }
    priority_queue<ll>q;
    rep(i,d){
        for(int j: g[i])q.push(j);
        if(!q.empty()){
            answer+=q.top();
            q.pop();
        }
    }
    cout<<answer<<endl;
    return 0;
}
