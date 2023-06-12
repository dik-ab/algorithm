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
int n;

int main(){
    cin>>n;
    vector<int>a(n);
    rep(i,n)cin>>a[i];
    vector<int>t(n);
    for(int i=0;i<n;i++)t[i]=a[i];
    sort(t.begin(),t.end());
    t.erase(unique(t.begin(),t.end()),t.end());
    vector<int>b(n);
    for(int i=0;i<n;i++){
        b[i]=lower_bound(t.begin(),t.end(),a[i])-t.begin();   
    }
    for(int i=0;i<n;i++){
        if(i>=1)cout<<" ";
        cout<<++b[i];
    }
    cout<<endl;
    return 0;
}