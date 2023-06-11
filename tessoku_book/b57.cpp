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
ll n,k;
dp[30][100009];
int main()
{
    cin>>n>>k;
    rep(i,n){
        str=to_string(i);
        dp[0][i]=i;
        for(int j=0;j<str.size(),j++){
            dp[0][i]-=(int)(str[j]-'0');
        }
    }
    rep(d,29)rep(i,n)dp[d][i]=dp[d-1][dp[d-1][i]];
    rep(i,n){
        int current=i;
        for(int d=29;d>=0;d--){
            if((k/(1<<d)%2==1)current=dp[d][current]);
        }
        cout<<current<<endl;
    }
    return 0;

}