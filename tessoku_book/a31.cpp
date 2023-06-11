#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll n;

int main(){
    cin>>n;
    ll a=n/3;
    ll b=n/5;
    ll c=n/15;
    cout<<a+b-c<<endl;
    return 0;
}