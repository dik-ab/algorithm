#include <iostream>
using namespace std;

int n;
char s[100000];
int main() {
    cin >> n;
    for(int i=1; i<=n; i++) {
        cin >> s[i];
    }
    for(int i=1; i<=n-2; i++) {
        if(s[i] == 'R' && s[i+1] && s[i+1] == s[i+2]) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}