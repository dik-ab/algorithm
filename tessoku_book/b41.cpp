#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

ll x,y;

int main(){
    cin>>x>>y;
    vector<pair<ll,ll>> answer;
    while(true){
        if(x==1&&y==1)break;
        answer.push_back(make_pair(x,y));
        if(y>x){
            y-=x;
        }
        else x-=y;
    }
    reverse(answer.begin(),answer.end());
    cout<<answer.size()<<endl;
    for(int i=0;i<answer.size();i++){
        cout<<answer[i].first<<" "<<answer[i].second<<endl;
    }

    return 0;
}