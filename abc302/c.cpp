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
vector<string>s(n);
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>s[i];
    sort(s.begin(),s.end());
    do{
        bool ok=true;
        for(int i=0;i<n-1;i++){
            int cnt=0;
            for(int j=0;j<m;j++)if(s[i][j]!=s[i+1][j])cnt++;
            if(cnt!=1)ok=false;
        }
        if(ok){
            cout<<"Yes"<<endl;
            return 0;
        }
    }while(next_permutation(s.begin(),s.end()));
    cout<<"No"<<endl;
    return 0;
}