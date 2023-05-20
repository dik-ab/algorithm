#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n;
int l[300009],r[300009];
vector<pair<int,int>> tmp;

int main(){
    cin>>n;
    rep(i,n){
        cin>>l[i]>>r[i];   
        tmp.push_back(make_pair(r[i],l[i]));
    }
    sort(tmp.begin(),tmp.end());
    rep(i,n){
        r[i]=tmp[i-1].first;
        l[i]=tmp[i-1].second;
    }
    int current_time=0,answer=0;
    rep(i,n){
        if(l[i]>=current_time){
            answer+=1;
            current_time=r[i];
        }
    }
    cout<<answer<<endl;
    return 0;
}