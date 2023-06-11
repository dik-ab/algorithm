#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,a[100009];

int main(){
    cin>>n;
    rep(i,n)cin>>a[i];
    int xor=a[1];
    for(int i=2;i<=n;i++)xor=(xor^a[i]);
    if(xor!=0)cout<<"First"<<endl;
    if(xor==0)cout<<"Second"<<endl;
    return 0;
}