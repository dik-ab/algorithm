#include <iostream>
using namespace std;

long long n,k;
long long a[100009];

long long check(long long x) {
    int sum = 0;
    for (int i=0; i<n; i++) sum += x / a[i];
    if (sum >= k) return true;
    else return false; 
}

int main() {
    cin >> n >> k;
    for (int i=1; i<=n; i++) cin >> a[i];
    long long l = 1;
    long long r = 1000000000;
    while(r > l) {
        long long mid = (l + r) / 2;
        bool ans = check(mid);
        if (ans == true) r = mid;
        else l = mid + 1;
    }

    cout << l << endl;
}