#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n;
string s;

int main(){
    cin>>n;
    cin>>s;
    bool answer=false;
    for(int i=0;i<=n-3;i++){
        if(s[i]=='R'&&s[i+1]=='R'&&s[i+2]=='R')answer=true;
        if(s[i]=='L'&&s[i+1]=='L'&&s[i+2]=='L')answer=true;
    }
    cout<<answer<<endl;
    return 0;
}