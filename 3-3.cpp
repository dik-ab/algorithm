#include <iostream>
using namespace std;

int n,k;
int a[100009];
int r[100009];

int main() {
    cin >> n >> k;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
    }
    for (int i=1; i<=n-1; i++) {
        if (i == 1) r[i] = 1;
        else r[i] = r[i-1];
        if (r[i]<n && a[r[i] + 1] - a[i] <= k) {
            r[i] += 1;
        }
    }    
    long long answer = 0;
    for (int i=1; i<=n-1; i++) answer += (r[i] - 1);
    cout << answer << endl;
    return 0;
    
}