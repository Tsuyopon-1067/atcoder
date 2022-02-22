#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

double d(int x1, int y1, int x2, int y2) {
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}
int main() {
    long long k;
    cin >> k;

    vector<int> b(64);
    rep (i, 64) {
        b[i] = (k % 2) ? 2 : 0;
        k /= 2;
    }
    int i = 63;
    while (b[i] == 0) i--;
    while (0 <= i) {
        cout << b[i];
        i--;
    }
    cout << endl;
    return 0;
}
