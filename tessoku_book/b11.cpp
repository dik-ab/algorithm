#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,a[100009],q,x[100009];
    cin>>n;
    rep(i,n)cin>>a[i];
    cin>>q;
    rep(i,q)cin>>x[i];
    sort(a+1,a+n+1);
    rep(i,q){
        int ans = lower_bound(a+1,a+n+1,x[i])-a;
        cout<<ans-1<<endl;
    }
    return 0;
}