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
char[109][109];

int main()
{
    int n,m,x,y;
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};
    string str;
    cin>>n>>m;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin>>s[i];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<8;k++){
                str="";
                for(int t=0;t<5;t++){
                    x=i+t*dx[k],y=j+t*dy[k];
                    if((x<0 || x>=n)||(y<0)||(y>=m))break;
                    str+=s[x][y];
                }
                if(str=="snuke"){
                    for(int t=0;t<5;t++){
                        x=i+t*dx[k]+1;y=j+t*dy[k]+1;
                        cout<<x<<" "<<y<<end;
                    }
                    return 0;
                }
            }
        }
    }
}