#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
#include <deque>
#include <map>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

//ll mod=2147483647;
int n,x[1009],y[10009],p[1000][1000];
int ansx,ansy;

int main()
{
    cin>>n;
    rep(i,n)rep(j,n){
        cin>>p[i][j];
        if(p[i][j]!=0){
            x[j]=p[i][j];
            y[i]=p[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(x[i]>x[j])ansx+=1;
            if(y[i]>y[j])ansy+=1;
        }
    }
    cout<<ansx+ansy<<endl;
    return 0;
}