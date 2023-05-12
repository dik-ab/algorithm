#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int n,t[109], d[109];
int dp[109][1449], answer =0;

int main(){
    cin>>n;
    for(int i=1;i<=n;i++)cin>>t[i]>>d[i];
    vector<pair<int,int>>Problems;
    for(int i=1;i<=n;i++)Problems.push_back(make_pair(d[i],t[i]));
    sort(Problems.begin(),Problems.end());
    for(int i=1;i<=n;i++){
        d[i]=Problems[i-1].first;
        t[i]=Problems[i-1].second;
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=1440;j++)dp[i][j]=-1;
    }
    dp[0][0]=0;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=n;j++)
        {
            if(j>d[i]||j<t[i])dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-t[i]]+1);
        }
    }
    for(int i=0;i<=1440;i++) answer = max(answer, dp[n][i]);
    cout<<answer<<endl;
    return 0;
}