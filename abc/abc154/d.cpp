#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<double> e(n);
    for (auto &x : e) {
        double t;
        cin >> t;
        x = (t+1)/2;
    }

    double cnd = 0;
    rep (i, k) cnd += e[i];

    double ans = cnd;
    reps (i, k, n) {
        cnd -= e[i-k];
        cnd += e[i];
        chmax(ans, cnd);
    }
    cout << setprecision(7) << ans << endl;
    return 0;
}
