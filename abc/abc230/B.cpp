#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "oxx";
    rep(i, 10) t += "oxx";

    string ans = "No";
    rep(i, 10) {
        bool flug = true;
        rep(j, s.size()) {
            if(s[j] != t[i+j]) flug = false;
        }
        if (flug) {
            ans = "Yes";
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
