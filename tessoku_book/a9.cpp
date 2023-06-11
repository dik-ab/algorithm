#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main(){
    int h,w,n,a[100009],b[100009],c[100009],d[100009],x[1509][1509],z[1509][1509];
    cin>>h>>w>>n;
    for(int i=1;i<=n;i++)cin>>a[i]>>b[i]>>c[i]>>d[i];
    for(int i=1;i<=n;i++){
        x[a[i]][b[i]]+=1;
        x[c[i]+1][b[i]]-=1;
        x[a[i]][d[i]+1]-=1;
        x[c[i]+1][d[i]+1]+=1;
    }
    for(int i=1;i<=h;i++){
        for(int j=0;j<=w;j++)z[i][j]=0;
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++)z[i][j]=z[i][j-1]+x[i][j];
    }
    for(int j=1;j<=w;j++){
        for(int i=1;i<=h;i++){
            z[i][j]=z[i-1][j]+z[i][j];
        }
    }
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(j>=2)cout<<" ";
            cout<<z[i][j];

        }
        cout<<endl;
    }
    return 0;
}