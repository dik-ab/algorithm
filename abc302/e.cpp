#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
int n,q,t,x,y,ans;
set<int>e[1000000];
set<int>::iterator itr;

int main()
{
    cin>>n>>q;
    ans=n;
    for(int i=0;i<q;i++){
        cin>>t;
        if(t==1){
            cin>>x>>y;
            x--,y--;
            if(e[x].size()==0)ans--;
            if(e[y].size()==0)ans--;
            e[x].insert(y);
            e[y].insert(x);
        }
        else{
            cin>>x;
            x--;
            itr=e[x].begin();
            while(itr!=e[x].end()){
                y=*itr;
                e[y].erase(x);
                if(e[y].size()==0)ans++;
                itr++;
            }
            if(e[x].size()>0)ans++;
            e[x].clear();
        }
        cout<<ans<<endl;
    }
    return 0;
}