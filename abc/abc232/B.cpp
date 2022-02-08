#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    cin >> t;

    string ans = "Yes";
    int sa = s[0] - t[0];

    rep(i, s.size()) {
        s[i] -= sa;
        if (s[i] > 'z') s[i] -= 26;
        else if(s[i] < 'a') s[i] += 26;
    }
    if (s != t) ans = "No";
    cout << ans << endl;

    return 0;
}
