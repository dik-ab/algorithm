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
int h,w;
vector<string>c;

int check(int i,int j){
    int n=0;
    while(true){
        int _n=n+1;
        if(!((i+_n<h)&&(j+_n<w)&&(c[i+_n][j+_n]=='#'))){
            break;
        }
        if(!((i+_n<h)&&(j-_n>=0)&&(c[i+_n][j-_n]=='#'))){
            break;
        }
        if(!((i-_n>=0)&&(j+_n<w)&&(c[i-_n][j+_n]=='#'))){
            break;
        }
        if(!((i-_n>=0)&&(j-_n>=0)&&(c[i-_n][j-_n]=='#'))){
            break;
        }
        n++;
    }
}

int main()
{
    cin>>h>>w;
    c.resize(h);
    for(int i=0;i<h;i++){
        cin>>c[i];
    }
    int n=min(h,w);
    vector<int>result(n+1,0);
    for(int i=1;i<h-1;i++){
        for(int j=1;j<w-1;j++){
            if(c[i][j]=='#'){
                ++result[check(i,j)];
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(i>=2)cout<<" ";
        cout<<result[i];
    }
    cout<<endl;
    return 0;
}