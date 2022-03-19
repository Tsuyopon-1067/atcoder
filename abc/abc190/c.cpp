#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> a(m);
    vector<int> b(m);
    rep (i, m) scanf("%d %d", &a[i], &b[i]);
    int k;
    scanf("%d", &k);
    vector<int> c(k);
    vector<int> d(k);
    rep (i, k) scanf("%d %d", &c[i], &d[i]);

    int ans = 0;
    rep (i, 1 << k) {
        vector<int> dish(n+1, 0);
        rep (j, k) {
            if (i & (1<<j)) ++dish[c[j]];
            else ++dish[d[j]];
        }
        int cand = 0;
        rep (j, m) {
            if (dish[a[j]] > 0 && dish[b[j]] > 0) ++cand;
        }
        chmax(ans, cand);
        
    }
    printf("%d\n", ans);
    return 0;
}
