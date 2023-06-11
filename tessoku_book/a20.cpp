#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    string s,t;
    cin>>s;
    cin>>t;
    int dp[2009][2009];
    dp[0][0]=0;
    rep0(i,s.size())rep0(j,t.size()){
        if(i>=1 && j>=1 && s[i-1]==t[i-1])dp[i][j]=max(dp[i-1][j],dp[i][j-1],dp[i-1][j-1]+1);
        else if(i>=1 && j>=1)dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        else if(i>=1)dp[i][j]=dp[i-1][j];
        else if(j>=1)dp[i][j]=dp[i][j-1];
    }
    cout<<dp[s.size()][t.size()]<<endl;
    return 0;
}