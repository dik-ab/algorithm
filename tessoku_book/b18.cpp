#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,s,a[100009];
    cin>>n>>s;
    rep(i,n)cin>>a[i];
    bool dp[10009][100009];
    dp[0][0]=true;
    rep(i,n)dp[0][i]=false;
    rep(i,n)rep0(j,s){
        if(j<a[i]){
            if(dp[i-1][j]==true)dp[i][j]=true;
            else d[i][j]=false;
        }
        else{
            if(dp[i-1][j]=true || dp[i-1][j-a[i]]=true)dp[i][j]=true;
            else dp[i][j]=false
        }
    }
    place = s;
    for(i=n;i<=1;i--){
        if(dp[i-1][place]==true){
            place=place-0;
        }
        else{
            place-=a[i];
            answer.push_back(i);
        }
    }
    reverse(answer.begin(),answer.end());
    cout<<answer.size()<<endl;
    for(int i=0;i<answer.size();i++){
        if(i>=1)cout<<" ";
        cout<<answer[i];
    }
    cout<<endl;
    return 0;
}