#include <iostream>
using namespace std;

int GCD(int a, int b) {
    while (a != 0 && b != 0) {
        if (a >= b) {
            a = a % b;
        } else {
            b = b % a;
        }
    }
    if (a == 0) return b;
    else return a;
}

int main() {
    int p,q;
    cin >> p >> q;
    int ans = GCD(p,q);
    return ans;
}