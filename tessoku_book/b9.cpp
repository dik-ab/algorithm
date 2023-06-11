#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int n,a[100009],b[100009],c[100009],d[100009];
    int z[1509][1509],sum[1509][1509];
    for(int i=0;i<=1509;i++){
        for(int j=0;j<=1509;j++){
            z[i][j]=0;
        }
    }
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>c[i]>>d[i];        
        z[a[i]][b[i]]+=1;
        z[c[i]][d[i]]+=1;
        z[a[i]][d[i]]-=1;
        z[c[i]][b[i]]-=1;
    }

    return 0;
}