#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string>st;
    set<string>ste;
    vector<string> s(n);
    rep (i, n) {
        string t;
        cin >> t;
        if (t[0] == '!') {
            t = t.substr(1);
            ste.insert(t);
        }
        else st.insert(t);
        s[i] = t;
    }
    unique(s.begin(), s.end());
    string ans = "satisfiable";
    for (auto t : s) {
        if (st.find(t) != st.end() && ste.find(t) != ste.end()) {
            ans = t;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
