#include <iostream>
using namespace std;

int main() {
    int h,w,q;
    int x[10000][10000], a[1000], b[10000], c[10000], d[10000];
    cin >> h >> w;
    for (int i=1; i<=h; i++ ) {
        for (int j=1; j<=w; j++) {
            cin >> x[i][j]; 
        }
    }
    cin >> q;
    for (int i=0; i<q; i++ ) cin >> a[i] >> b[i] >> c[i] >> d[i];   
    int z[1000][10000];
    for (int i=1; i<=h; i++){
        for( int j=1; j<=w; j++) {
            z[i][j] = z[i][j-1] + x[i][j];
        }
    }
    for (int i=1; i<=h; i++){
        for( int j=1; j<=w; j++) {
            z[i][j] = z[i-1][j] + x[i][j];
        }
    }
    int ans[1000];
    for(int i=0; i<q; i++) {
           ans[i] = z[a[i]-1][b[i]-1] + z[c[i]][d[i]] - z[a[i]-1][d[i]] - z[c[i]][b[i]-1];
           cout << ans[i] << endl;
    }
}