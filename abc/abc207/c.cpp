#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    vector<int> r(n);
    rep (i, n) {
        int t;
        cin >> t >> l[i] >> r[i];
        if (t == 3 || t == 4) ++l[i];
        if (t == 2 || t == 4) --r[i];
    }
    int ans = 0;
    rep (i, n) reps (j, i, n) {
        if (l[i] <= l[j] && l[j] <= r[i]) ++ans;
        else if (l[i] <= l[j] && r[j] <= r[i]) ++ans;
        else if (l[j] <= l[i] && r[i] <= r[j]) ++ans;
    }
    cout << ans << endl;
    return 0;
}
