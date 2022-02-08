#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<string> t(n);
    vector<bool> ans(n, false);
    map<string, int> mp;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s] = i;
    }

    vector<int> flug(n, false);
    for(int i = 0; i < m; i++) {
        string t;
        cin >> t;
        int idx;
        idx = mp[t];
        flug[idx] = true;
    }
    
    rep (i, n) {
        cout << (flug[i] ? "Yes" : "No") << endl;
    }
    return 0;
}
