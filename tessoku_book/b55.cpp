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
ll q,query[100009],x[100009];
set<ll>set1,set2;

ll GetDown(ll r){
    auto itr=set2.lower_bound(-r);
    if(itr2==set2.end())return -1000000000LL;
    return -(*itr);
}

ll GetUp(ll r){
    auto itr=set1.lower_bound(r);
    if(itr==set1.end())return 1000000000LL;
    return (*itr);
}

int main()
{
    cin>>n;
    rep(i,n)cin>>query[i]>>x[i];
    rep(i,n){
        if(query[i]==1){
            set1.insert(x[i]);
            set2.insert(-x[i]);
        }
        if(query[i]==2){
            ll v1=GetDown(x[i]);
            ll v2=GetUp(x[i]);
            ll answer=min(x[i]-v1,v2-x[i]);
            if(answer>=1000000000LL)cout<<"-1"<<endl;
            else cout<<answer<<endl;
        }
    }
    return 0;
}