#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

//ll mod=2147483647;
int n,t[2000],d[2000];
int dp[200][2000];

int main()
{
    cin>>n;
    vector<pair<int,int>>Problems;
    rep(i,n){
        cin>>t[i]>>d[i];
        Problems.push_back(make_pair(d[i],t[i]));
    }
    sort(Problems.begin(),Problems.end());
    rep(i,n){
        t[i]=Problems[i-1].second;
        d[i]=Problems[i-1].first;
    }
    rep(i,n)rep(j,1440)dp[i][j]=-1;
    dp[0][0]=0;
    rep(i,n)rep(j,1440){
        if(j<t[i] || j>d[i])dp[i][j]=dp[i-1][j];
        else {
            dp[i][j]=max(dp[i-1][j],dp[i-1][j-t[i]]+1)
            cout<<'a'<<endl;
    }
    for(int j=0;j<=1599;j++)int answer=max(answer,dp[n][j]);
    cout<<answer<<endl;
    return 0;
}