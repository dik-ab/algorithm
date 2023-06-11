#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int n,a[509][509];
int q,qt[200009],x[200009],y[200009];
int t[509];

int main(){
    cin>>n;
    rep(i,n)rep(j,n)cin>>a[i][j];
    rep(i,n)t[i]=i;
    cin>>q;
    rep(i,q){
        cin>>qt[i]>>x[i]>>y[i];
        if(qt[i]==1){
            swap(t[x[i]],t[y[i]]);
        }
        if(qt[i]==2){
            cout<<a[t[x[i]]][y[i]]<<endl;
        }
    }
    return 0;
}