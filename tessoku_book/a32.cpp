#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,a,b;
bool dp[100009];

int main(){
    cin>>n>>a>>b;
    for(int i=0;i<=n;i++){
        if(i>=a && dp[i-a]==false)dp[i]=true;
        else if(i>=b && dp[i-b]==false);
        else dp[i]=false;
    }
    if(dp[n]==true)cout<<"First"<<endl;
    else cout<<"Second"<<endl;
    return 0;
}