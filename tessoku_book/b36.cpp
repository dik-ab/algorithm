#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll n,k;
string s;

int main(){
    cin>>n>>k;
    cin>>s;
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1')cnt+=1;
    }
    if(cnt%2==0 && k%2==0){cout<<"Yes"<<endl;return 0;}
    if(cnt%2==1 && k%2==1){cout<<"Yes"<<endl;return 0;}
    cout<<"No"<<endl;
    return 0;
}