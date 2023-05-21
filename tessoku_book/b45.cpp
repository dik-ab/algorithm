#include <iostream>
#include <vector>
#include<algorithm>
#include <string>
#include <stack>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
string s;
cin>>s;
stack(int)st; 

int main(){
    cin>>s;
    for(int i=0;i<s.size();s++){
        if(s[i]=='(')st.push(i+1);
        if(s[i]==')'){
            cout<<st.top()<<" "<<i+1<<endl;
            st.pop();
        }
    }
    return 0;
}