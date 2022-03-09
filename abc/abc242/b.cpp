#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> cc(26);
    for (auto c : s) ++cc[c-'a'];
    rep (i, 26) {
        rep (j, cc[i]) cout << (char)('a' + i);
    }
    cout << endl;
    return 0;
}
