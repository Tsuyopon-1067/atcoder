#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define repe(i, n) for (auto i = (i) : n)
#define INF 2000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);
    vector<vector<int>> a(n, vector<int>(m));
    vector<int> c(n);
    rep (i, n) {
        scanf("%d", &c[i]);
        rep (j, m) scanf("%d", &a[i][j]);
    }

    int ans = INF;
    rep (i, 1<<n) {
        int mon = 0;
        vector<int> cmp(m, 0);
        rep (j, n) {
            if (i & (1<<j)) {
                mon += c[j];
                rep (k, m) cmp[k] += a[j][k];
            }
        }
        bool flag = true;
        rep (j, m) {
            if (cmp[j] < x) flag = false;
        }
        if (flag) chmin(ans, mon);
    }
    if (ans == INF) ans = -1;
    printf("%d\n", ans);
    return 0;
}
