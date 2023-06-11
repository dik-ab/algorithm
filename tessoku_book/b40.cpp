#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
ll n,a[200009],answer=0;

int main(){
    cin>>n;
    rep(i,n)cin>>a[i];
    for(int i=0;i<100;i++)cnt[i]=0;
    for(int i=0;i<=n;i++)cnt[a[i]%100]+=1;
    for(int i=1;i<50;i++)answer+=ant[i]*cnt[100-i];
    answer+=cnt[0]*(cnt[0]-1LL)/2LL;
    answer+=cnt[50]*(cnt[50]-1LL)/2LL;
    cout<<answer<<endl;
    return 0;
}