#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,h[100009];
    cin>>n;
    rep(i,n)cin>>h[i];
    int dp[100009];
    h[0]=0;
    dp[1]=0;
    dp[2]=abs(h[2]-h[1]);
    for(int i=3;i<=n;i++){
        dp[i]=min(dp[i-1]+abs(h[i]-h[i-1]),dp[i-2]+abs(h[i]-h[i-2]));
    }
    int place=n;
    vector<int>answer(n);
    while(true){
        answer.push_back(place);
        if(place==1)break;
        if(dp[place-1]+abs(h[place]-h[place-1])==dp[place])place-=1;
        else place-=2;
    }
    reverse(answer.begin(),answer.end());
    rep0(i,answer.size()){
        if(i>=1)cout<<" ";
        cout<<answer[i];
    }
    cout<<endl;
    return 0;
}