#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<double> l(n);
    vector<double> r(n);
    rep (i, n) {
        int t;
        cin >> t >> l[i] >> r[i];
        if (t == 3 || t == 4) l[i] += 0.1;
        if (t == 2 || t == 4) r[i] -= 0.1;
    }
    ll ans = 0;
    rep (i, n) reps (j, i+1, n) {
        double ll = max(l[i], l[j]);
        double rr = min(r[i], r[j]);
        if (ll <= rr) ++ans;
    }
    cout << ans << endl;
    return 0;
}
