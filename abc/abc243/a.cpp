#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int v, a, b, c;
    cin >> v >> a >> b >> c;
    while (true) {
        v -= a;
        if (v < 0) {
            cout << "F" << endl;
            return 0;
        }

        v -= b;
        if (v < 0) {
            cout << "M" << endl;
            return 0;
        }
        v -= c;
        if (v < 0) {
            cout << "T" << endl;
            return 0;
        }
    }
    return 0;
}
