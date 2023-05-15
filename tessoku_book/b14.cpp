#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

vector<ll> Enumerate(vector<ll>a){
    vector<ll>sumlist;
    rep0(i,1<<a.size()){
        ll sum=0;
        rep0(j,a.size()){
            int wari=(1<<j);
            if((i/wari)%2==1)sum+=a[j];
        }
        sumlist.push_back(sum);
    }
}

int main(){
    ll n,k,a[40];
    cin>>n>>k;
    rep(i,n)cin>>a[i];
    vector<ll>l1,l2;
    rep(i,n/2)l1.push_back(a[i]);
    for(int i=n/2+1;i<=n;i++)l2.push_back(a[i]);
    vector<ll>sum1=Enumerate(l1);
    vector<ll>sum2=Enumerate(l2);
    sort(sum1.begin(),sum1.end());
    sort(sum2.begin(),sum2.end());
    rep0(i,sum1.size()){
        int pos=lower_bound(sum2.begin(),sum2.end(),k-sum1[i])-sum2.begin();
        if(pos<sum2.size()&&sum2[pos]==k-sum1[i]){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;
    return 0;
}