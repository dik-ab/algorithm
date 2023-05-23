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
#define rep0(i,n) for(ll i=0;i<=n;i++)
#define rep(i,n) for(ll i=1;i<=n;i++)

//ll mod=2147483647;



class Segment{
public:
    int dat[300000],siz=1;
    void init(int n){
        siz=1;
        while(siz<n)siz*=2;
        for(int i=1;i<siz*2;i++)dat[i]=0;
        
    }

    void update(int pos,int x){
        pos=pos+siz-1;
        dat[pos]=x;
        while(pos>=2){
            pos/=2;
            dat[pos]=max(dat[pos*2],dat[pos*2+1]);
        }
    
    }

    int calc(int l,int r, int a,int b, int u){
        int count=0;
        if(r<=a || b<=l)return -1000000;
        if(l<=a && b<=r)return dat[u];
        int m=(a+b)/2;
        int answerL=calc(l,r,a,m,u*2);
        
        int answerR=calc(l,r,m,b,u*2+1);
        
        return max(answerL, answerR);
    }
};
int n,q,query[100009],x[100009],l[100009],r[100009],pos[100009];
Segment Z;

int main()
{
    cin>>n>>q;
    Z.init(n);
    rep(i,q){
        cin>>query[i];
        if(query[i]==1){
            cin>>pos[i]>>x[i];
        }
        if(query[i]==2){
            cin>>l[i]>>r[i];
        }
    }
    rep(i,q){
        if(query[i]==1){
            Z.update(pos[i],x[i]);
        }
        if(query[i]==2){
            int answer=Z.calc(l[i],r[i],1,Z.siz+1,1);
            cout<<answer<<endl;
        }
    }
    return 0;
}