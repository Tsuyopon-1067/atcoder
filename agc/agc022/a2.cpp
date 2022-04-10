#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char>st;
    for (auto x : s) st.insert(x);

    string ans = "";
    set<char>anslst;

    if (s.size () < 26) {
        char add = 'a';
        ans = s;
        rep (i, 26) {
            if (st.find(add) == st.end() ) {
                ans += add;
                break;
            }
            ++add;
        }

    } else {
        int idx = 25;
        while (s[idx-1] > s[idx]) {
            --idx;
        }
        if (idx == 0) ans = "-1";
        else {
            set<char>lst;
            reps (i, idx-1, 26) lst.insert(s[i]);
            ans = s.substr(0, max(0, idx-2));
            char add;
            for (add = s[idx-1]+1; add <= 'z'; ++add) {
                if (lst.find(add) != lst.end()) {
                    ans += add;
                    break;
                }
            }
            cout << add << endl;
        }
    }

    cout << ans << endl;

    return 0;
}
