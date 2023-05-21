#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)


int main()
{
    int q,query[100009],x[100009];
    cin>>q;
    rep(i,q)cin>>query[i]>>x[i];
    set<int>s;
    rep(i,q){
        if(query[i]==1)s.insert(x[i]);
        if(query[i]==2)s.erase(x[i]);
        if(query[i]==3){
            auto itr=s.lower_bound(x[i]);
            if(itr==s.end())cout<<-1<<endl;
            else cout<<(*itr)<<endl;
        
        }
    }
    return 0;
}