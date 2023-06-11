#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using mint = atcoder::modint998244353;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
int n;
string s;
int ans=0;
int level=0;
int main()
{
 
    cin>>n;
    cin>>s;
    
    for(int i=0;i<n;i++){
        if(s[i]=='-'){
            level=max(level,ans);
            ans=0;
        }
        else ans+=1;
    }
    reverse(begin(s),end(s));
    ans=0;
    for(int i=0;i<n;i++){
        if(s[i]=='-'){
            level=max(level,ans);
            ans=0;
        }else{
            ans+=1;
        }
    }
    if(level<=0)cout<<-1<<endl;
    else cout<<level<<endl;
    return 0;
}