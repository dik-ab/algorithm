#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,m;
int a[200009];
int stu[200009];

int main(){
    cin>>n>>m;
    rep(i,m)cin>>a[i];
    rep(i,n){
       stu[i]=m;
    }   
    rep(i,m){
        stu[a[i]]-=1;
    }
    rep(i,n)cout<<stu[i]<<endl;
    return 0;
}