#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int n,x,y,g[100009];
int main(){
    cin>>n>>x>>y;
    rep(i,n)cin>>a[i];
    for(int i=0;i<=100000;i++){
        bool t[3]={false,false,false};
        if(i>=x)t[g[i-x]]=true;
        if(i>=y)t[g[i-y]]=true;
        if(t[0]==false)g[i]=0;
        else if(t[1]==false)g[1]=1;
        else g[2]=2;
    }
    int xor=0;
    rep(i,n)xor=(xor^g[a[i]]);
    if(xor!=0)cout<<"First"<<endl;
    if(xor==0)cout<<"Second"<<endl;
    
    return 0;
}