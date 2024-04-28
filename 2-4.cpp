#include <iostream>
using namespace std;

int main() {
    int h,w.n;
    int a[100000], b[100000], c[1000000], d[1000000];
    cin >> h >> w >> n;
    for (int i=1; i<=n; i++) cin >> a[i] >> b[i] >> c[i] >> d[i];
    int x[10000][190000];
    for(int i=1; i<=n; i++) {
        x[a[i]][b[i]] += 1;
        x[a[i]][d[i]+1] -=1;
        x[c[i]+1][a[i]] -=1;
        x[c[i]+1][d[i]+1] +=1;
    }
    int z[10000][10000];
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            z[i][j] = z[i][j-1]+x[i][j];
        }
    }
    for (int i=1; i<=h; i++) {
        for (int j=1; j<=w; j++) {
            if (j>=2) cout << " ";
            cout << x[i][j];
        }
        cout << endl;
    }
}
