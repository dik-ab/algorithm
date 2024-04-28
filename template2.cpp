#include <iostream>

using namespace std;

int main() {
    int d,n;
    int l[100], r[100];
    cin >> d;
    cin >> n;
    for (int i=1; i<=n; i++) {
        cin >> l[i] >> r[i];
    }
    int s[1000];
    s[0] = 0;
    for (int i=1; i<=n; i++) {
        s[l[i]]++;
        s[r[i] + 1] --;
    }
    int ans[10000];
    for (int j=1; j<=n; j++) {
        ans[j] = ans[j-1] + s[j];
    }

}