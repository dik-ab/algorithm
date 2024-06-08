#include <iostream>
using namespace std;

int n,k;
int a[309], b[309];

int GetScore(int a, int b) {
    int ans = 0;
    for(int i=1; i<=n; i++) {
        if (a <= a[i] && a[i] <= a+k && b <= b[i] && b[i] <= b+k) {
            cnt += 1;
        }
    }
}