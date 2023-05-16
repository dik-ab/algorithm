#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,a[100009],b[100009];
    cin>>n;
    for(int i=2;i<=n;i++)cin>>a[i];
    for(int i=3;i<=n;i++)cin>>b[i];
    int dp[100009];
    dp[0]=0;
    dp[1]=0;
    dp[2]=a[2];
    for(int i=3;i<=n;i++){
        dp[i]=min(dp[i-2]+b[i], dp[i-1]+a[i]);
    }
    int place=n;
    vector<int>answer(n);
    while(true){
        answer.push_back(place)
        if(place==1)break;
        if(dp[place-1]+a[place]==dp[place])place-=1;
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