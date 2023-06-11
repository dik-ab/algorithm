#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,s,a[100009];
    cin>>n>>s;
    rep(i,n)cin>>a[i];
    bool dp[100009][100009];
    dp[0][0]=true;
    rep(i,n)dp[0][i]=false;
    rep(i,n)rep0(j,n){
        if(j<a[i]){
            if(dp[i-1][j]==true)dp[i][j]=true;
            else dp[i][j]=false;
        }
        else{
            if(dp[i-1][j]==true || dp[i][j-a[i]]==true)dp[i][j]=true;
            else dp[i][j]=false;
        }
    }
    return 0;
}