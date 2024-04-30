#include <iostream>
using namespace std;

int n,k;
int main() {
    cin >> n >> k;
    if (k >= 2n-2 && k%2==0) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}