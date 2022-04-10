#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    set<char>st;
    for (auto x : s) st.insert(x);

    string ans = "";
    if (st.size() < 26) {
        char add;
        for (add = 'a'; add <= 'z'; ++add) {
            if (st.find(add) == st.end()) {
                ans = s + add;
                break;
            }
        } 
    } else {
            int idx = 24;
            for (idx = 24; idx >= 0; --idx) {
                if (s[idx] < s[idx+1]) break;
            }
            if (idx == -1) ans = "-1";
            else {
                ans = s.substr(0, idx);
                set<char>r;
                reps (i, idx, 26) r.insert(s[i]);
                for (char add = s[idx] + 1; add <= 'z'; ++add) {
                    if (r.find(add) != r.end()) {
                        ans += add;
                        break;
                    }
                } 
            }
    }
    cout << ans << endl;
    return 0;
}
