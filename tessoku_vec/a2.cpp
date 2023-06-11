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
int n,x;

int main()
{
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    bool ans=false;
    for(int i=0;i<n;i++){
        if(a[i]==x)ans=true;
    }
    if(ans==true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}