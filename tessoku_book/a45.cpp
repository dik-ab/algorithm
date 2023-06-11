#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int q;
char query[100009];
string name[100009];
stack<string>s;

int main(){
    cin>>q;
    rep(i,q){
        cin>>query[i];
        if(query[i]=='1'){
            cin>>name[i];
            s.push(name[i]);
        }
        if(query[i]=='2')cout<<s.top()<<endl;
        if(query[i]=='3')s.pop();
    }

    return 0;
}