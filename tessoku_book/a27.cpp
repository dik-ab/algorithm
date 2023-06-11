#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll a,b;


int main(){
    cin>>a>>b;
    while(a>=1 && b>=1){
        if(a>=b)a%=b;
        else b%=a;
        if(a==0)cout<<b<<endl;
        if(b==0)cout<<a<<endl;
    }
    return 0;
}