#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    string ss;
    cin >> n;
    cin >> ss;
    cin >> q;

    string s[2];
    s[0] = ss.substr(0, n);
    s[1] = ss.substr(n, n);

    int sw12 = 0;

    rep (i, q) {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 2) {
            sw12 = 1 - sw12;
            continue;
        }
        
        int sa = 0;
        int sb = 0;
        if (a > n) {
            a -= n;
            sa = 1;
        }
        if (b > n) {
            b -= n;
            sb = 1;
        }
        sa = (sa + sw12) % 2;
        sb = (sb + sw12) % 2;
        swap(s[sa][a-1], s[sb][b-1]);
    }
    cout << s[sw12] << s[1-sw12] << endl;
    return 0;
}
