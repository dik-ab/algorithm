#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,k,a[309],b[309];

int getScore(int c,int d){
    int cnt=0;
    rep(i,n){
        if(c<=a[i]<=c+k && d<=b[i]<=d+k)cnt+=1;
    }
    return cnt;
}

int main(){
    int answer=0;
    cin>>n>>k;
    rep(i,n)cin>>a[i]>>b[i];
    rep(i,100)rep(j,100){
        int Score=getScore(i,j);
        answer=max(answer,Score);
    }
    cout<<answer<<endl;
    return 0;
}