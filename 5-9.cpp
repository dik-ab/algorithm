#include <iostream>
using namespace std;

int n, a[100009];

int main() {
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    int xor_sum = a[1];
    for(int i=2; i<=n; i++) xor_sum = (xor_sum ^ a[i]);
    if (xor_sum != 0) cout << "First" << endl;
    else cout << "Second" << endl;
}