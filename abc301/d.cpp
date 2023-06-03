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
    cin>>s>>n;
    reverse(s.begin(),s.end());
    while(s.size()<60)s.push_back('0');
    int lb=-1;
    for(int i=0;i<60;i++){
        if(s[i]!='?' && s[i]-'0' != (n>>i&1))lb=i;
    }
    if(lb==-1){
        cout<<n<<endl;
        return 0;
    }
    for(int i=lb;i<60;i++){
        if(s[i]=='1' || !(n>>i&1))continue;
        s[i]='0';
        for(int j=0;j<i;j++){
            if(s[j]=='?')s[j]='1';
        }
        for(int j=i+1;j<60;j++){
            s[j]='0'+(n>>j&1);
        }
        ll ans=0;
         for (int j=0;j<60;j++) {
            ans=ans*2 + (s[j]-'0');
        }
        cout<<ans<<endl;
        return 0;
    }
    cout<<-1<<endl;
}