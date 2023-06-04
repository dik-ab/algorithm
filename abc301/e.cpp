#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep0(i,n) for(int i=0;i<=n;i++)
#define rep(i,n) for(int i=1;i<=n;i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
//ll mod=2147483647;
//ll mod=1000000007
constexpr long long INF = 1000000000000000000;
const int dx[4]={1,0,-1,0};
const int dy[4]={0,1,0,-1};

vector<vector<int>>dist(int h,int w,const vector<string>&a,int si,int sj){
    vector res(h, vector<int>(w,inf));
    res[si][sj]=0;
    queue<pair<int,int>>q;
    q.push(si,sj);
    qhile(!q.empty()){
        auto [i,j]=q.front();
        q.pop();
        for(int k=0;k<4;k++){
            int ni=i+dx[k];
            int nj=j+dy[k];
            if(ni<0 or ni>=h or nj<0 or nj>=w)continue;
            if(a[ni][nj]=='#')continue;
            if(res[ni][nj]>res[i][j]+1){
                res[ni][nj]=res[i][j]+1;
                q.push(ni,nj);
            }
        }
    }
    return res;
}

int main()
{
    int h,w,t;
    cin>>h>>w>>t;
    vector<string>a(h);
    int si,sj,gi,gj;
    vector<pair<int,int>>ls;
    for(int i=0;i<h;i++){
        cin>>a[i];
        for(int j=0;j<w;j++){
            if(a[i][j]=='S')si=i,sj=j;
            if(a[i][j]=='G')gi=i,gj=j;
            if(a[i][j]=='o')ls.push_back(i,j);
        }
    }
    int cnt=ls.size();
    vector d(cnt,vector<vector<int>>());
    for(int i=0;i<cnt;i++)d[i]=dist(h,w,a,ls[i].first,ls[i].second);
    vector dp(1<<cnt,vector<int>(cnt,inf));
    for(int i=0;i<cnt;i++)dp[1<<i][i]=d[i][si][sj];
    for(int s=1;s<(1<<cnt);s++){
        for(int last=0;last<cnt;last++){
            if(dp[s][last]==inf)continue;
            for(int nx=0;nx<cnt;nx++){
                if(s>>nx&1)continue;
                if(dp[s|1<<nx][nx]>dp[s][last]+d[last][ls[nex].first][ls[nx].second]);
                dp[s|1<<nx][nx]=dp[s][last]+d[last][ls[nx].first][ls[nx].second];
            }
        }
    }
    int ans=-1;
    if(dist(h,w,a,si,sj)[gi][gj]<=t)ans=0;
    for(int s=1;s<(1<<cnt);s++){
        for(int last=0;last<cnt;last++){
            if(dp[s][last]+d[last][gi][gj]<=t){
                int now=0;
                for(int i=0;i<cnt;i++)if(s>>i&1)++now;
                ans=max(ans,now);
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}