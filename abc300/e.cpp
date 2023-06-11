
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

ll N;
map<ll,mint>memo;
mint dp(ll n){
  if(n>=N)return n==N?1:0;
  if(memo.count(n))return memo[n];
  mint res=0;
  for(int i=2;i<=6;i++)res+=dp(i*n);
  return memo[n]=res/5;
}

int main()
{
  cin>>N;
  cout<<dp(1).val()<<endl;
    return 0;
}