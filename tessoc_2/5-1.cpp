#include <iostream>
using namespace std;

int q;
int x[1000];

bool isPrime(int x) {
    for(int i=2; i<=x*x; i++) {
        if ((x % i) == 0) return false;
    }
    return true;
}

int main() {
    cin >> q;
    for(int i=1; i<=q; i++) cin >> x[i];
    for(int i=1; i<=q; i++) {
        bool ans = isPrime(x[i]);
        if(ans == true) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;   
}