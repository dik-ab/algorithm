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
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)

//ll mod=2147483647;
int h,w,k;
char c[19][109];
char d[19][109];
int answer;

int paintRow(int remain){
    vector<pair<int,int>>Column;
    rep(j,w){
        int cnt=0;
        for(int i=1;i<=h;i++){
            if(d[i][j]=='.')cnt+=1;
        }
        Column.push_back(make_pair(cnt,j));
    }
    sort(Column.begin(),Column.end());
    reverse(Column.begin(),Column.end());

    for(int j=0;j<remain;j++){
        int idx=Column[j].second;
        rep(int i=1;i<=h;i++)d[i][idx]='#';
    }
    int ret=0;
    rep(i,h)rep(j,w)if(d[i][j]=='#')ret+=1;
    return ret;
}

int main()
{
    cin>>h>>w>>k;
    rep(i,h)rep(j,w){
        cin>>c[i][j];
    }
    for(int t=0;t<(1<<h);t++){
        rep(i,h)rep(j,w)d[i][j]=c[i][j];
        int remain=k;
        for(int i=1;i<=h;i++){
            int wari=(1<<(i-1));
            if((t/wari)%2==0)continue;
            remain-=1;
            rep(j,w)d[i][j]='#';
        }
        if(remain>=0){
            int sub=paintRow(remain);
            answer=max(answer,sub);
        }
    }
    cout<<answer<<endl;
    return 0;
}