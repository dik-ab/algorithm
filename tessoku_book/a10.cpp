#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,a[100009],d,l[100009],r[100009],p[100009],q[100009];
    cin>>n;
    rep(i,n)cin>>a[i];
    cin>>d;
    rep(i,d)cin>>l[i]>>r[i];
    p[1]=a[1];
    for(int i=2;i<=n;i++)p[i]=max(p[i-1],a[i]);
    q[n]=a[n];
    for(int i=n;i>=1;i--)q[i]=max(q[i+1],a[i]);
    rep(i,d)cout<<max(p[l[i]-1],q[r[i]+1])<<endl;
    return 0;
}