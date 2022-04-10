#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length() + 1;
    vector<int> ans(n);
    rep (i, n-1) {
        if (s[i] == '<') ans[i+1] = ans[i] + 1;
    }
    rrep (i, n-1) {
        if (s[i] == '>') ans[i] = max(ans[i], ans[i+1] + 1);
    }

    ll sum = 0;
    for (auto x : ans) sum += x;
    cout << sum << endl;
    return 0;
}
