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
int n,m,a[100009],b[1000009];
vector<int>g[100009];

int main()
{
    cin>>n>>m;
    rep(i,m){
        cin>>a[i]>>b[i];
        g[a[i]].push_back(b[i]);
        g[b[i]].push_back(a[i]);
    }
    int num=0;
    int ans=0;
    rep(i,n){
        if(g[i].size()>num){
            num=g[i].size();
            ans=i;
        }
    }
    cout<<ans<<endl;
    return 0;
}