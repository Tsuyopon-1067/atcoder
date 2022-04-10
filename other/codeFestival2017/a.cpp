#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string t = "AKIHABARA";
    string x = "";

    int ofs = 0;
    int n = max(9, (int)s.length());
    rep (i, n) {
        if (s[i-ofs] != t[i]) {
            ++ofs;
            x += "A";
        } else x += s[i-ofs];
    }
    if (t == x) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
