#include <bits/stdc++.h>
#include "atcoder/all"
using namespace std;
using mint = atcoder::modint998244353;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
int n,d;
int main(){
    cin>>n>>d;
    vector<int>x(n),y(n);
    for(int i=0;i<n;i++)cin>>x[i]>>y[i];
    vector<vector<bool>>graph(n, vector<bool>(n));
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)if((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j])<=d*d)graph[i][j]=true;
    vector<bool>ans(n);
    ans[0]=true;
    queue<int>que;que.push(0);
    while(!que.empty()){
        int q=que.front();que.pop();
        for(int i=0;i<n;i++){
            if(graph[q][i]&&!ans[i]){
                ans[i]=true;
                que.push(i);
            }
        }
    }
    for(int i=0;i<n;i++)cout<<(ans[i]?"Yes":"No")<<endl;
    return 0;
}