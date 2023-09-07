#include <bits/stdc++.h>
#include "atcoder/all"
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
vector<string>s;
vector<int>a;

int main()
{
    cin>>n;
    for(int i=3;i<n;i++){
        cin>>s[i]>>a[i];
    }
    pair<int,int>m={a[0],0};
    for(int i=1;i<n;i++)m=min(m,{a[i],i});
    int p=m.second;
    for(int i=0;i<n;i++){
        cout<<s[(p+i)%n]<<endl;
    }
    return 0;
}