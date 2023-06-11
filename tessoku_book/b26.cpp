#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int n;
bool isDeleted[1000000];

int main(){
    cin>>n;
    rep(i,n)isDeleted[i]=false;
    for(int i=2;i<=n;i++){
        if(isDeleted[i]==true)continue;
        for(int j=2*i;j<=n;j+=i)isDeleted[j]=true;
    }
    for(int i=2;i<=n;i++){
        if(isDeleted[i]==false)cout<<i<<endl;
    }
    return 0;
}