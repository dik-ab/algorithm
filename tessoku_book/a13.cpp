#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
#define pb() push_back()
#define mp() make_pair()

int main(){
    ll n,k,ans,a[100009],r[100009];
    cin>>n>>k;
    rep(i,n)cin>>a[i];
    rep(i,n-1){
        if(i==1)r[i]=1;
        else r[i]=r[i-1];
        while(r[i]<n && a[r[i]+1]-a[i]<=k){
            r[i]+=1;
        }
    }
    rep(i,n)ans+=(r[i]-i);
    cout<<ans<<endl;
    return 0;
}