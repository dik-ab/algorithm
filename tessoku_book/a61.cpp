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
int n,m,a[100009],b[100009];
vector<int>g[100009];

int main()
{
    cin>>n>>m;
    rep(i,m){
        cin>>a[i]>>b[i];
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    rep(i,n){
        cin>>i>>": {";
        for(int j=0;j<g[i].size();j++){
            if(j>=1)cout<<", ";
            cout<<g[i][j];
        }
        cout<<"}"<<endl;
    }
    return 0;
}