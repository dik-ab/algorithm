#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int d,n,l[100009],r[100009],b[100009];
    cin>>d;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>l[i]>>r[i];
    for(int i=1;i<=n;i++){
        b[l[i]]+=1;
        b[r[i]+1]-=1;
    }
    int sum[100009];
    sum[0]=0;
    for(int i=1;i<=d;i++){
        sum[i]=sum[i-1]+b[i];
        cout<<sum[i]<<endl;
    }
    return 0;
}