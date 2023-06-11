#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int n,x,a[109];
    cin>>n>>x;
    bool answer=false;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(x==a[i])answer=true;
    }
    if(answer==true)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}