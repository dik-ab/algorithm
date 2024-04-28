#include <iostream>
using namespace std;

int n,k;
int p[109];
int q[109];

int main() {
    cin >> n >> k;
    for(int i=0; i<n; i++) {
        cin >> p[i];
    }
    for (int i=0; i<n; i++) cin >> q[i];
    bool ans = false;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (p[i] + q[j] == k) ans = true;
        }
    }
    return 0;
}