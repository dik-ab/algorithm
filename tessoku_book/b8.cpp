#include <iostream>
#include <vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    int n,q,a[1500],b[1500],c[1500],d[1500],x[100009],y[100009];
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x[i]>>y[i];
    }
    cin>>q;
    for(int i=1;i<=q;i++) {
        cin>>a[i]>>b[i]>>c[i]>>d[i];
    }
    int z[100009][100009];
    for(int i=0;i<=1500;i++){
        for(int j=0;j<=1500;j++){
            z[i][j]=0;
        }
    }
    int s[1509][1509];
    for(int i=1;i<=n;i++)s[x[i]][y[i]]+=1;
    for(int i=1;i<=1500;i++){
        for(int j=1;j<=1500;j++) z[i][j]=z[i][j-1]+s[i][j];
    }
    for(int i=1;i<=1500;i++){
        for(int j=1;j<=1500;j++)z[i][j]=z[i-1][j]+z[i][j];
    }
    for(int i=1;i<=q;i++){
        cout<<z[c[i]][d[i]]+z[a[i]-1][b[i]-1]-z[a[i]-1][d[i]]-z[c[i]][b[i]]<<endl;
    }
    return 0;
}