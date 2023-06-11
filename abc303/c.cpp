#include <./bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

//ll mod=2147483647;
//ll mod=1000000007
int n,m,h,k;
string s;
set<pair<int,int>>st;

int main()
{
    cin>>n>>m>>h>>k;
    cin>>s;
    rep(i,m){
        int x,y;
        cin>>x>>y;
        st.insert({x,y});
    }
    int dx=0,dy=0;
    for(int i=0;i<n;i++){
        if(s[i]=='R')dx+=1;
        if(s[i]=='L')dx-=1;
        if(s[i]=='U')dy+=1;
        if(s[i]=='D')dy-=1;
        if(--h<0){
            cout<<"No"<<endl;
            return 0;
        }
        if(h<k and st.count({dx,dy})){
            h=k;
            st.erase({dx,dy});
        }
    }
    cout<<"Yes"<<endl;
    return 0;
}