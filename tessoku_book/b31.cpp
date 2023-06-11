#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll n,a,b,c,d,e,f,g;

int main(){
    cin>>n;
    a=n/3;
    b=n/5;
    c=n/7;
    d=n/15;
    e=n/35;
    f=n/21;
    g=n/105;
    cout<<a+b+c-d-e-f+g<<endl;
    return 0;
}