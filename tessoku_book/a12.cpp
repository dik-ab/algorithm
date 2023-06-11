#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

ll n,k,a[100009];

bool resolve(int x){
    ll sum;
    cout<<"x:"<<x<<endl;
    cout<<"first"<<sum<<endl;
    rep(i,n)sum+=x/a[i];
    cout<<"second"<<sum<<endl;
    if(sum>=k)return true;
    else return false; 
}

int main(){
    cin>>n>>k;
    rep(i,n)cin>>a[i];
    bool answer;
    ll r = 1000000000;
    ll l = 1;
    while(r>l){
        ll m = (r+l)/2;
        answer = resolve(m);
        if(answer==true)r = m;
        if(answer==false)l=m+1;
    }
    cout<<r<<endl;
    ll g;
    cout<<g+1<<endl;
    return 0;
}