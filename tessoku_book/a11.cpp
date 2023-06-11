#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int main(){
    int n,x,a[100009];
    cin>>n>>x;
    rep(i,n)cin>>a[i];
    int r=n;
    int l=1;
    while(r>=l){
        int mid=(r+l)/2;
        if(x>a[mid])l=mid+1;
        if(x==a[mid]){
            cout<<mid<<endl;
            return 0;
        }
        if(x<a[mid])r=mid-1;
    }
    cout<<l<<endl;
    return 0;
}