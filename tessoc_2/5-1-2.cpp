#include <iostream>
using namespace std;

int q, x[10009], n=300000;
bool deleted[1000009];
int main() {
    cin >> q;
    for(int i=1; i<=q; i++) {
        cin >> x[i];
    }
    for(int i=2; i<=n; i++) deleted[i] = false;
    for(int i=2; i*i <=n; i++) {
        if (deleted[i] == true) continue;
        for(int j=i*2; j<=n; j+=i) deleted[j] = true;
    }
    for(int i=1; i<=q; i++) {
        if (deleted[x[i]] == false) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}