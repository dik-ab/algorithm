#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;

int main()
{
    int n;
    cin>>n;
    vector<int>deg(n,0);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        deg[u-1]++;deg[v-1]++;
    }
    vector<int>res(n+1,0);
    for(int i=0;i<n;i++)res[deg[i]]++;
    int sum=0;
    for(int i=3;i<=n;i++)sum+=(i+1)*res[i];
    res[2]=(n-sum)/3;
    for(int v=2;v<=n;v++){
        if(res[v]){
            for(int i=0;i<res[v];i++)cout<<v<<" ";
        }
    }
    cout<<endl;
    return 0;
}