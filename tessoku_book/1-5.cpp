#include <iostream>
using namespace std;

int main() {
    int n,k;
    int ans = 0;
    for (int i=0; i<n; i++) {
        for (int j=0;j<n;j++) {
            int x = k-i-j;
            if (1 <= x <= n) ans += 1;
        }
    }
    cout << ans << endl;
}