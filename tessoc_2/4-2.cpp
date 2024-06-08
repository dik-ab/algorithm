#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int a[10009], b[10009];
    cin >> n;
    for(int i=2; i<=n; i++) cin >> a[i];
    for(int i=3; i<=n; i++) cin >> b[i];
    int dp[10000];
    dp[1] = 0;
    dp[2] = a[2];
    for(int i=3; i<=n; i++) {
        dp[i] = min(dp[i-1] + a[i], dp[i-2] + b[i]);
    }
    int place = n;
    vector<int> t;
    while (true) {
        t.push_back(place);
        if (place == 1) break;
        if (dp[place-1] + a[place] == dp[place]) place -=1;
        else place -=2;
    }
    reverse(t.begin(), t.end());
    cout << t.size() << endl;
    for(int i=0; i<t.size(); i++) {
        if(i >=1) cout << " ";
        cout << t[i];
    }
    cout << endl;
    return 0;
}