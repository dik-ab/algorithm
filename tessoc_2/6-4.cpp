#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, l[100],r[100];
vector<pair<int,int>> tmp;
int main() {
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> l[i] >> r[i];
        tmp.push_back(make_pair(r[i], l[i]));
    }
    sort(tmp.begin(), tmp.end());
    for(int i=1; i<=n; i++) {
        r[i] = tmp[i-1].second;
        l[i] = tmp[i-1].first;
    }
    int current = 0;
    int ans = 0;
    for(int i=1; i<=n; i++) {
        if(current <= l[i]) {
            current = r[i];
            ans += 1;
        }
    }
    cout << ans << endl;
}