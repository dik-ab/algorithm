#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

ll n,k,a[100009],s[100009],r[100009];
ll sum(int l,int r){
    return s[r]-s[l-1];
}

int main(){
    cin>>n>>k;
    rep(i,n)cin>>a[i];
    s[0]=0;
    rep(i,n)s[i]=s[i-1]+a[i];
    rep(i,n){   
        if(i==1)r[i]=1;
        else r[i]=r[i-1];
        while(r[i]<=n && sum(i,r[i])<=k){
            r[i]+=1;
        }
    }
    ll answer=0;
    rep(i,n)answer+=(r[i]-i);
    cout<<answer<<endl;
    return 0;
}