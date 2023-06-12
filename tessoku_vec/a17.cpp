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
    vector<int>a(n+1);
    vector<int>b(n+1);
    vector<int>dp(n+1,0);
    for(int i=2;i<=n;i++)cin>>a[i];
    for(int i=3;i<=n;i++)cin>>b[i];
    dp[2]=a[2];
    for(int i=3;i<=n;i++){
        dp[i]=min(dp[i-1]+a[i],dp[i-2]+b[i]);
    }
    int place=n;
    vector<int>ans;
    while(true){
        ans.push_back(place);
        if(place==1)break;
        if(dp[place-1]+a[place]==dp[place])place-=1;
        else place-=2;
    }
    reverse(ans.begin(),ans.end());
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        if(i>=1)cout<<" ";
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}