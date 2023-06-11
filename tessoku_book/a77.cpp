#include <iostream>
using namespace std;

int n,l,k,a[100009];

bool check(int x){
    int Count = 0,Last_Kireme=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]-Last_Kireme>=x && l-a[i]>=x){
            Count += 1;
            Last_Kireme = a[i];
        }
    }
    if(Count>=k)return true;
    return false;
}

int main(){
    cin>>n>>l>>k;
    for(int i=1;i<=n;i++)cin>>a[i];

    long long left=1,right=1000000000;
    while(left<right){
        long long mid=(left+right)/2;
        bool answer=check(mid);
        if(answer=false)right=mid-1;
        if(answer=true)left=mid;
    }
    cout<<left<<endl;
    return 0;
}