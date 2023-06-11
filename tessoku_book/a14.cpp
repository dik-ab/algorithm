#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,a[1009],b[1009],c[1009],d[1009];
    ll k;
    cin>>n>>k;
    rep(i,n)cin>>a[i];
    rep(i,n)cin>>b[i];
    rep(i,n)cin>>c[i];
    rep(i,n)cin>>d[i];
    int p[1000009],q[1000009];
    rep(i,n)rep(j,n){
        p[(i-1)*n+j]=a[i]+b[j];
    }
    rep(i,n)rep(j,n){
        q[(i-1)*n+j]=c[i]+d[j];
    }
    sort(q+1,q+(n*n)+1);
    rep(i,n*n){
        int pos=lower_bound(q+1,q+(n*n)+1,k-p[i])-q;
        if(pos<=n*n && q[pos]==k-p[i]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}