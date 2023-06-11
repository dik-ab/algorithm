#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

ll n,a[200009],cnt[109];

int main(){
    cin>>n;
    rep(i,n)cin>>a[i];
    rep(i,n)cnt[a[i]]+=1;
    ll answer=0;
    rep(i,100){
        answer+=(cnt[i]*(cnt[i]-1)*(cnt[i]-2))/6;
    }
    cout<<answer<<endl;
    return 0;
}