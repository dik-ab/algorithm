#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int n,x;
queue<int>qu;
string a;

int main()
{
    cin>>n>>x;
    cin>>a;
    qu.push(x);a[x-1]='@';
    while(!qu.empty()){
        int pos=qu.front();qu.pop();
        if(pos-2>=0 && a[pos-2]=='.'){
            a[pos-2]='@';
            qu.push(pos-1);
        }
        if(pos<=n-1 && a[pos]=='.'){
            a[pos]='@';
            qu.push(pos+1);
        }
    }
    cout<<a<<endl;
    return 0;
}