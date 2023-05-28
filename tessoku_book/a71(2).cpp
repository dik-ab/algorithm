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
int n,a[100],b[100];
int answer=0;
int main()
{
    cin>>n;
    rep(i,n)cin>>a[i];
    rep(j,n)cin>>b[j];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);reverse(b+1,b+n+1);
    rep(int i=1;i<=n;i++)ans+=a[i]*b[i];
    cout<<answer<<endl;
    return 0;
}