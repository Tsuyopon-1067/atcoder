#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)


int main() {
    int l, r;
    cin >> l >> r;
    string s;
    cin >> s;

    rep (i, l-1) cout << s[i];
    rep (i, r-l+1) cout << s[r-i-1];
    reps (r,i, s.length()) cout << s[i];
    cout << endl;
    return 0;
}
