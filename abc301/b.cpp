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

int n;
int main()
{
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<a.size()-1;i++){
        if(a[i]+1<a[i+1])a.insert(a.begin()+i+1,a[i]+1);
        if(a[i]-1>a[i+1])a.insert(a.begin()+i+1,a[i]-1);
    }
    for(int i=0;i<a.size();i++)cout<<a[i]<<' ';
    return 0;
}