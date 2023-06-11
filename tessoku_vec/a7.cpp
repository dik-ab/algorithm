#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=0;i<n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
int d;
int n;

int main()
{
    cin>>d;
    cin>>n;
    vector<int>a(d+1);
    rep(i,n){
        int l,r;
        cin>>l>>r;
        l--,r--;z
        a[l]+=1;
        a[r+1]-=1;
    }
    vector<int>b(d+1);
    b[0]=a[0];
    for(int i=1;i<=d;i++){
        b[i]=b[i-1]+a[i];
    }
    rep(i,d)cout<<b[i]<<endl;
    return 0;
}