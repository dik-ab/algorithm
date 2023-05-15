#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,a[100009],b[100009];
    rep(i,n)cin>>a[i];
    vector<ll>t(n);
    rep(i,n)t.push_back(a[i]);
    sort(t.begin(),t.end());
    t.erase(unique(t.begin(),t.end()),t.end());
    rep(i,n){
        b[i]=lower_bound(t.begin(),t.end(),a[i])-t.begin();
        b[i]+=2;
    }
    rep(i,n){
        if(i>=2)cout<<" ";
        cout<<b[i];
    }
    cout<<endl;
    return 0;
}