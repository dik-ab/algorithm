#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int n,l,a[200009];
char b[1000009];
int main(){
    cin>>n>>l;
    rep(i,n)cin>>a[i]>>b[i];
    int answer=0;
    rep(i,n){
        if(b[i]=='E')answer=max(answer,l-a[i]);
        if(b[i]=='W')answer=max(answer,a[i]);
    }
    cout<<answer<<endl;
    return 0;
}