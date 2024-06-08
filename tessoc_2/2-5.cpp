#include <iostream>
#include <algorithm>
using namespace std;
int n;
int a[100009];
int d;
int l[100009], r[100009];
int maxL[100009];
int maxR[100009];
int main () {

    cin >> n;
    for(int i=1; i<=n; i++ ) cin >> a[i];
    cin >> d;
    for (int i=1; i<=d; i++) cin >> l[i] >> r[i];

    for(int i=1; i<=n; i++) maxL[i] = max(maxL[i-1], a[i]);

    for(int j=n; j >= 1; j--)maxR[j] = max(maxR[j + 1], a[j]);
    for (int i=1; i<=d; i++) {
        cout << max(maxL[l[i]-1], maxR[r[i] + 1]) << endl;
    }
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;

int N, A[100009], P[100009], Q[100009];
int D, L[100009], R[100009];

int main() {
	// 入力
	cin >> N;
	for (int i = 1; i <= N; i++) cin >> A[i];
	cin >> D;
	for (int d = 1; d <= D; d++) cin >> L[d] >> R[d];

	for (int i = 1; i <= N; i++) P[i] = max(P[i - 1], A[i]);

	for (int i = N; i >= 1; i--) Q[i] = max(Q[i + 1], A[i]);

	// それぞれの日について答えを求める
	for (int d = 1; d <= D; d++) {
		cout << max(P[L[d] - 1], Q[R[d] + 1]) << endl;
	}
	return 0;
}