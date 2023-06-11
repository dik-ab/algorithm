#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

int h,w,k;
int answer = 0;
char c[11][109], d[19][109];

int paintRow(int remaining_steps)
{
    vector<pair<int,int>> Column;
    for(int j=1; j<=w; j++)
    {
        int cnt = 0;
        for (int i=1; i<=h; i++)
        {
            if (d[i][j] == '.') cnt += 1;
        }
        Column.push_back(make_pair(cnt, j));
    }
    sort(Column.begin(), Column.end());
    reverse(Column.begin(), Column.end());

    for (int j=0; j<remaining_steps; j++){
        int idx = Column[j].second;
        for (int i=1;i<=h;i++)d[i][idx]='#';
    }
    int ret =0;
    for(int i=1;i<=h;i++)
    {
        for (int j=1; j<w; j++){
            if (d[i][j]=='#')ret +=1;
        }
    }
    return ret;
}

int main(){
    cin >> h >> w >> k;
    for (int i=1; i<=h; i++){
        for (int j=1; j<=w; j++){
            cin >> c[i][j];
        }
    }
    for(int t=0;t<(1<<h);t++){
        for (int i=1; i<=h;i++){
            for (int j=1; j<=w; j++)d[i][j] = c[i][j];
        }
        int remaining_steps = k;
        for (int i=1; i<=h; i++){
            int wari = (1 << (i-1));
            if ((t/wari)%2 == 0) continue;
            remaining_steps -= 1;
            for(int j=1; j<=w; j++) d[i][j] = '#';
        }
        if (remaining_steps >= 0){
            int subanswer = paintRow(remaining_steps);
            answer = max(answer, subanswer);
        }
    }
    cout << answer << endl;
    return 0;
}