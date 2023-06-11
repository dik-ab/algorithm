#include <iostream>
using namespace std;

int n, p[109][109];
int x[109], inversionx=0;
int y[109], inversiony=0;

int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>p[i][j];
            if(p[i][j]!=0)x[i]=p[i][j];y[j]=p[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(x[i]>x[j])inversionx+=1;
            if(y[i]>y[j])inversiony+=1;
        }
    }
    cout << inversionx + inversiony << endl;
    return 0;
}