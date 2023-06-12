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
int e,f;

int main(){
    cin>>n>>k;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    vector<int>d(n);
    vector<int>p(n*n);
    vector<int>q(n*n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    for(int i=0;i<n;i++)cin>>c[i];
    for(int i=0;i<n;i++)cin>>d[i];
    
    rep(i,n)rep(j,n){
        p[i*n+j]=a[i]+b[j];
    }
    rep(i,n)rep(j,n){
        q[i*n+j]=c[i]+d[j];
    }
    sort(q.begin(),q.end());
    for(int i=0;i<n*n;i++){
        int pos1=lower_bound(q.begin(),q.end(),k-p[i])-q.begin();
        if(pos1<n*n && q[pos1]==k-p[i]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}