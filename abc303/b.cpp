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
//ll mod=1000000007
int n,m;
int a[100][100];

int main()
{
    cin>>n>>m;
    rep(i,m)rep(j,n)cin>>a[i][j];
    int ans=0;
    rep(i,n)for(int j=i;j<=n;j++){
        bool flag=false;
        for(int k=1;k<=m;k++){
            for(int l=1;l<=n-1;l++){
                if(a[k][l]==i&&a[k][l+1]==j)flag=true;
                if(a[k][l]==j&&a[k][l+1]==i)flag=true;
            }
        }
        if(!flag)ans++;
    }
    cout<<ans<<endl;
    return 0;
}