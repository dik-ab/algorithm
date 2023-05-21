#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
#include <queue>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int q;
int query[100009];
string st;
queue<string> qu;

int main()
{
    cin>>q;
    rep(i,q){
        cin>>query[i];
        if(query[i]==1){
            cin>>st;
            qu.push(st);
        }
        if(query[i]==2){
            string ans=qu.front();
            cout<<ans<<endl;
        }
        if(query[i]==3)qu.pop();
    }
    return 0;
}