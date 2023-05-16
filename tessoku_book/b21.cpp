#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n;
string s;
int dp[1009][1009];

int main(){
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++)dp[i][i]=1;
    rep0(i,n-2)if(s[i]==s[i+1])dp[i][i+1]=2;
    else dp[i][i+1]=1;

    for(int len=2;len<=n-1;len++){
        for(int l=0;l<n-len;l++){
            int r=l+len;

        }
    }
    cout<<dp[0][n-1]<<endl;
    return 0;
}