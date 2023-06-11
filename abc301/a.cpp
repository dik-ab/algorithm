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

int n;string s;

int main()
{
    cin>>n>>s;
    int t=0,a=0;
    for(int i=0;i<n;i++){
        if(s[i]=='T')++t;
        else ++a;
    }
    if(t>a)cout<<'T'<<endl;
    else if (t<a)cout<<'A'<<endl;
    else cout<<char('T'+'A'-s.back())<<endl;
    return 0;
}