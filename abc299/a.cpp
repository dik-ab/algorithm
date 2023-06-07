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

int main()
{
    cin>>n;
    cin>>s;
    int line_first=-1,line_second,batu;
    for(int i=0;i<n;i++){
        if(s[i]=='|'){
            if(line_first==-1)line_first=i;
            else line_second=i;
        }
        if(s[i]=='*')batu=i;
    }
    if(line_first<batu && batu<line_second)cout<<"in"<<endl;
    else cout<<"out"<<endl;
    return 0;
}