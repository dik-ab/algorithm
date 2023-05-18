#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,k,a[1000];
bool dp[1000009];

int main(){
    cin>>n>>k;
    rep(i,k)cin>>a[i];
    rep(i,n){dp[i]=false
    rep(j,k){
       
        if(i>=a[j] && dp[i-a[j]]==false)dp[i]=true;
    }
    }
    if(dp[n]==true)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    return 0;
}