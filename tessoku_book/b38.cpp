#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int n;
string s;
int lefter[100009];
int righter[100009];
int consl=1;
int consr=1;

int main(){
    lefter[0]=1;
    righter[0]=1;
    cin>>n;
    cin>>s;
    for(int i=0;i<=n-2;i++){
        if(s[i]=='A')consl+=1;
        if(s[i]=='B')consl=1;
        lefter[i+1]=consl;
    }    
    for(int i=n-2;i>=0;i--){
        if(s[i]=='B')consr+=1;
        if(s[i]=='A')consr=1;
        righter[i]=consr;
    }
    ll ans=0;
    for(int i=0;i<n;i++)ans+=max(lefter[i],righter[i]);
    cout<<ans<<endl;
    return 0;
}