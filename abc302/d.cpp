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
int n,m;
vector<ll>a(n),b(m);
int main()
{
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    while(true){
        if((n==0)||(m==0)){
            cout<<-1<<endl;
            return 0;
        }
        x=a.back(),y=b.back();
        if(abs(x-y)<=d){
            cout<<(x+y)<<endl;
            return 0;
        }
        if(x>y)a.pop_back(),n--;
        else b.pop_back(),m--;
    }
    return 0;
}