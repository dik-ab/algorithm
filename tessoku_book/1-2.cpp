#include <iostream>
using namespace std;

int main() {
    int n,x;
    int a[109];
    bool ans = false;
    cin >> n >> x;
    for (int i=0; i<n; i++) {
        cin >> a[i];
    }
    for (int i=0; i<n; i++) if (a[i] == x) ans=true;
    if (ans == true) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}