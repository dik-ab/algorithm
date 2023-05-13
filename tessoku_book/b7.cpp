#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int t,n,l[500009],r[500009],b[500009];
    cin>>t;
    cin>>n;
    int sum[500009];
    for(int i=1;i<=n;i++){
        cin>>l[i]>>r[i];
    }
    for (int i = 0; i <= t; i++)b[i] = 0;
    for(int i=1;i<=n;i++){
        b[l[i]]+=1;
        b[r[i]]-=1;
    }
    sum[0]=b[0];
    for(int i=1;i<=t;i++){
        sum[i]=sum[i-1]+b[i];
    }
    for(int i=0;i<t;i++)cout<<sum[i]<<endl;

    return 0;
}