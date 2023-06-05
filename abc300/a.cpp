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
int n,a,b;
int main()
{
    cin>>n>>a>>b;
    vector<int>c(n);
    
    for(int i=0;i<n;i++){
        cin>>c[i];
        if(a+b==c[i]){
            cout<<i+1<<endl;
            return 0;
        }
    }
    return 0;
}