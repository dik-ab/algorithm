#include <iostream>
using namespace std;

int n;
int a[1000];
int cnt[1000];

int main() {
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }
    for(int i=1; i<=100; i++) cnt[i] = 0;
    for(int i=1; i<=n; i++) cnt[a[i]] += 1;
    int ans = 0;
    for(int i=1; i<=n; i++) {
        ans += i * (i-1) * (i-2) / 6;
    }
    cout << ans << endl;
    return 0;
}