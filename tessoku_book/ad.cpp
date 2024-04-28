#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];
    for (int i=0; i<(1 << n); i++) {
        int sum=0;
        for (int j=0; j<n; j++) {
            int wari = 1 << j;
            if (i / wari % 2 == 1) sum += a[j];
        }
    }
}