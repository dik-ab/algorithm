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
string s;
ll n;

ll t=n;
while(t){
    n=(char)(t%2+'0')+n;
    t/=2;
}

int main()
{
    string s;
    ll n;
    cin>>s>>n;
    if(n>=(1LL<<s.size())){
        ll res=0;
        for(int i=0;i<s.size();i++){
            if(s[i]!=0)res+=1LL<<(s.size()-1-i);
        }
        cout<<res<<endl;
        return 0;
    }
    ll res-=1;
    for(int d=0;d<=s.size();d++){
        ll tmp=0;
        bool ok=true;
        for(int i=0;i<d;i++){
            if(n&(1LL<<(s.size()-1-i))){
                if(s[i]=='0')ok=false;
            }
            else{
                if(s[i]=='1')ok=false;
            }
        }
        if(!ok)continue;
        if(d<s.size() && !(n&(1LL<<(s.size()-1-d))))continue;
        if(d<s.size() && s[d]=='1')continue;
        for(int i=d+1;i<s.size();i++){
            if(s[i]!='0')tmp+=1LL<<(s.size()-1-i);
        }
        res=max(res,tmp);
    }
    cout<<res<<endl;
}