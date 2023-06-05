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
#define N 300000
bool is_prime_table[N+1];
vector<int>primes;

void generate_primes(int n){
    is_prime_table[0]=false;
    is_prime_table[1]=false;
    for(int i=2;i<=n;i++){
        is_prime_table[i]=true;
    }
    for(int i=2;i*i<=n;i++){
        if(is_prime_table[i]){
            for(int j=i+1;j<=n;j+=i){
                is_prime_table[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(is_prime_table[i]){
            primes.push_back(i);
        }
    }
    return;
}

int main()
{
    generate_primes(N);
    ll n;
    cin>>n;
    ll a,b,c;
    int s=primes.size();
    int result=0;
    for(int i=0;i<s;i++){
        a=(ll)primes[i];
        if(a*a*a*a*a>n){
            break;
        }
        for(int j=i+1;j<s;j++){
            b=(ll)primes[j];
            if(a*a*b*b*b>n)break;
        
        c=(ll)sqrt(n/(a*a*b));
        if(c<=b){
            break;
        }
        int upper=upper_bound(primes.begin(),primes.end(),c)-primes.begin();
        result+=upper-j-1;
    }
            }   
            cout<<result<<endl;     return 0;
}