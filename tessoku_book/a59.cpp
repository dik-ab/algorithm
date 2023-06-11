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
int n;
int a[200009];
stack<pair<int,int>>st;
int answer[200009];

int main()
{
    cin>>n;
    rep(i,n)cin>>a[i];
    rep(i,n)if(i>=2){
        st.push(make_pair(i-1,a[i-1]));
        while(!st.empty()){
            if(a[i]>=st.top().second)st.pop();
            else break;
        }
        if(!st.empty())answer[i]=st.top().first();
        else answer[i]=-1;
    }
    for(int i=1;i<=n;i++){
        if(i>=2)cout<<" ";
        cout<<answer[i];
    }
    cout<<endl;
    return 0;
}