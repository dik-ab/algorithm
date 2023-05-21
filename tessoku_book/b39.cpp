#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

int n,d;
int x[200009],y[200009];
bool used[200009];

int main(){
    cin>>n>>d;
    rep(i,n)cin>>x[i]>>y[i];
    rep(i,n){
        int maxValue=0;
        int maxID=-1;
        rep(j,n){
            if(used[j]==true)continue;
            if(x[i]>=i && maxValue<y[j]){
                maxValue=y[j];
                maxID=j;
            }
        }
        if(maxID!=-1){
            used[maxID]=true;
            answer+=maxValue;
        }
    }    
    return 0;
}