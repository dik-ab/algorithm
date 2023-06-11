#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
const int mod=1000000007;
int n,a[1000000009];

int main(){
    cin>>n;
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=(a[i-1]+a[i-2])%mod;
    }
    cout<<a[n]<<endl;
    return 0;
}