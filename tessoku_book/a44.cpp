#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,q,first,x,y;
int state=1;
int a[200009];
int main(){
    cin>>n>>q;

    rep(i,n)a[i]=i;
    rep(i,q){
        cin>>first;
    
        if(first==1){
            cin>>x>>y;
            if(state==1)a[x]=y;
            if(state==2)a[n+1-x]=y;
        }
        if(first==2){
            if(state==1)state=2;
            else state=1;
        }
        if(first==3){
            cin>>x;
            if(state==1)cout<<a[x]<<endl;
            if(state==2) cout<<a[n+1-x]<<endl;
        }
    }    
    return 0;
}