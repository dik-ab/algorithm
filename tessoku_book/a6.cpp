#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
long long n,q,a[100009],l[100009],r[100009],s[100009];

int main(){    
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int j=1;j<=q;j++)cin>>l[j]>>r[j];

    s[0]=0;
    for(int i=1;i<=n;i++){
        s[i]=s[i-1]+a[i];
    }
    for(int j=1;j<=q;j++)
    {
        cout<<s[r[j]]-s[l[j]-1]<<endl;
    }
    return 0;
}