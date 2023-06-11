#include <iostream>
#using namespace std;

int n,l,k,a[100009];

bool check(int x){
    int count=0,last=0;
    for(int i=0;i<=n;i++){
        if(a[i]-last>=x && l-a[i]>=x){
            count+=1;
            last=a[i];
        }
        if(count>=k)return true;
        return false;
    }
}

int main(){
    cin>>n>>l>>k;
    rep(i,n)cin>>a[i];
    ll left=1;right=1000000000;
    while(left<right){
        ll (m=left+right)/2;
        bool answer=check(m);
        if(answer=false)right=mid-1;
        else left=mid;
    }
    cout<<left<<endl;
    return 0;
}