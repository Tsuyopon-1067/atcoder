#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    rep (i, n) rep (j, m) cin >> a[i][j];

    ll ans = 0;
    rep (i, m) reps (j, i+1, m) {
        ll t = 0;
        rep (k, n) {
            t += max(a[k][i], a[k][j]);
        }
        chmax(ans, t);
    }
    cout << ans << endl;
    return 0;
}
