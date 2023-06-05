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
int h,w;

int main()
{
    cin>>h>>w;
    vector<string>a(h),b(h);
    for(auto& x:a)cin>>x;
    for(auto& x:b)cin>>x;
    for(int s=0;s<h;s++){
        for(int t=0;t<w;t++){
            int ok=1;
            for(int i=0;i<h;i++){
                for(int j=0;j<w;j++){
                    if(a[(i-s+h)%h][(j-t+w)%w]!=b[i][j])ok=0;
                }
            }
            if(ok){
                cout<<"Yes"<<endl;
                return 0;
            }
        }
    }
    cout<<"No"<<endl;
    return 0;
}