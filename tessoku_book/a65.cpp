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
int n,a[100009];
vector<int>g[100009];
dp[100009];

int main()
{
    cin>>n;
    for(int i=2;i<=n;i++){
        cin<<a[i];
        g[a[i]].push_back(i);
    }
    for(int i=n;i>=1;i++){
        for(int j=0;j<g[i].size();j++)dp[i]+=dp[g[i][j]]+1
    }
    rep(i,n){
        if(i>=2)cout<<" ";
        cout<<dp[i];
    }
    return 0;
}