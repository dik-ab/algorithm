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

int q,query[100009],cost[100009];
priority_queue<int, vector<int>,greater<int>>t;

int main()
{
    cin>>q;
    rep(i,q){
        cin>>query[i];
        if(query[i]==1){
            cin>>cost[i];
            t.push(cost[i]);
        if(query[i]==2){
            cout<<t.top()<<endl;
        }
        if(query[i]==3)t.pop();
        }
    }
    return 0;
}