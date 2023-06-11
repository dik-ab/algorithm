#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int q,x[1000009];

bool isPrime(int a){
    for(int i=2;i*i<=a;i++){
        if(a%i==0)return false;
    }
    return true;
}

int main(){
    cin>>q;
    bool ans=false;
    rep(i,q){
        cin>>x[i];
        ans=isPrime(x[i]);
        if(ans==true)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}