#include <bits/stdc++.h>
#include "atcorder/modint.hpp"
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;

map<char,int>ms;
map<char,int>mt;
string s,t;

int main()
{
    cin>>s;
    cin>>t;
    for(int i=0;i<s.size();i++){
        ms[s[i]]+=1;
        mt[t[i]]+=1;
    }
    string at="atcorder";
    for(char c='a';c<='z';c++){
        if(at.find(c)!=string::npos){
            if(ms[c]>mt[c]){
                mt['@']-=(ms[c]-mt[c]);
            }else if(ms[c]<mt[c]){
                ms['@']-=(mt[c]-ms[c]);
            }
        }else{
            if(ms[c]!=mt[c]){
                cout<<"No"<<endl;
                return 0;
            }
        }
    }
    if((ms['@']<0)||(mt['@']<0)){
        cout<<"No"<<endl;
        return 0;
    }
    cout<<"Yes"<<endl;
    return 0;
}