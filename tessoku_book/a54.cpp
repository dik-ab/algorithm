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

int n,a[100009];

int main()
{
    cin>>n;
    rep(i,n)cin>>a[i];
    ll answer=0;
    rep(i,n){
        answer+=map[a[i]];
        map[a[i]]+=1;
    }
    cout<<answer<<endl;
}