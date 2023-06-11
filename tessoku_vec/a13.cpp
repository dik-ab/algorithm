#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using mint = atcoder::modint998244353;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep1(i,n) for(int i=1;i<=n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
int n,k;
int main(){
    cin>>n>>k;
    vector<int>a(n+1);
    vector<int>r(n+1);
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=n-1;i++){
        if(i==1)r[i]=1;
        else r[i]=r[i-1];
        cout<<"r[i]"<<"aa"<<r[i]<<endl;
        while(r[i]<n && a[r[i]+1]-a[i]<=k){
            r[i]+=1;
        }
        cout<<"r[i]"<<" "<<r[i]<<endl;
    }
    ll answer=0;
    for(int i=1;i<=n-1;i++){
        cout<<"r"<<r[i]<<endl;
        cout<<r[i]-i<<endl;
        answer+=(r[i]-i);
    }
    cout<<answer<<endl;
    return 0;
}