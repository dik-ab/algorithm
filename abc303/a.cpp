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
int n;
string s,t;

int main()
{
    cin>>n;
    cin>>s;
    cin>>t;
    string answer="Yes";
    for(int i=0;i<n;i++){
        if(s[i]==t[i])continue;
        else if((s[i]=='1'&&t[i]=='l') || (s[i]=='l'&&t[i]=='1'))continue;
        else if((s[i]=='0'&&t[i]=='o') || (s[i]=='o'&&t[i]=='0'))continue;
        else answer="No";break;
    }
    cout<<answer<<endl;
    return 0;
}