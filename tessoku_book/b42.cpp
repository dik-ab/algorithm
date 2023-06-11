#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll n;
ll a[100009],b[100009];

ll solve(int omote,int ura){
    ll sum=0;
    rep(i,n){
        ll card1=a[i];if(omote==2)card1=-a[i];
        ll card2=b[i];if(ura==2)card2=-b[i];
        if(card1+card2>=0){
            sum+=(card1+card2);
        }
    }
    return sum;
}

int main(){
    cin>>n;
    rep(i,n)cin>>a[i]>>b[i];
    ll answer1=solve(1,1);
    ll answer2=solve(1,2);
    ll answer3=solve(2,1);
    ll answer4=solve(2,2);

    cout<<max({answer1,answer2,answer3,answer4})<<endl;
    return 0;
}

int main(){
    
    return 0;
}