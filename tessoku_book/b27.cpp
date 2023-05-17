#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll a,b;

ll GCD(ll a,ll b){
    while(a>=1 && b>=1){
        if(a>=b)a%=b;
        else b%=a;
        if(a==0)return b;
        if(b==0)return a;
    }
}

int main(){
    cin>>a>>b;
    cout<<a*b/GCD(a,b)<<endl;
    return 0;
}