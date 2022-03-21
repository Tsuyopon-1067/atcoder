#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, k;
    cin >> h >> w >> k;
    vector<vector<bool>> c(h, vector<bool>(w));
    rep (i, h) rep (j, w) {
        char tmp;
        cin >> tmp;
        c[i][j] = (tmp == '#' ? true : false);
    }

    int ans = 0;
    rep (i, 1 << h) rep (j, 1 << w) {
        vector<bool> rh(h, false);
        vector<bool> rw(w, false);
        rep (ii, h) if (i & (1 << ii)) rh[ii] = true;
        rep (jj, w) if (j & (1 << jj)) rw[jj] = true;
        int cnt = 0;
        rep (ii, h) rep (jj, w) {
            if (rh[ii] || rw[jj]) continue;
            if (c[ii][jj]) ++cnt;
        }
        if (cnt == k) ++ans;
    }
    cout << ans << endl;
    return 0;
}
