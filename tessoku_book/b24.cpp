#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
int n,x[100009],y[100009],l[100009],len;

int get_lisvalue(vector<int>a){
    len=0;
    rep(i,a.size())l[i]=0;
    for(int i=0;i<a.size();i++){
        int pos=lower_bound(l+1,l+len+1,a[i])-l;
        l[pos]=a[i];
        if(pos>len)len+=1;
    }
    return len;
}


int main(){
    cin>>n;
    rep(i,n)cin>>x[i]>>y[i];
    vector<pair<int,int>>tmp;
    rep(i,n)tmp.push_back(make_pair(x[i],-y[i]));
    sort(tmp.begin(),tmp.end());
    vector<int>a;
    for(int i=0;i<tmp.size();i++){
        a.push_back(-tmp[i].second);
    }
    cout<<get_lisvalue(a)<<endl;
    return 0;
}