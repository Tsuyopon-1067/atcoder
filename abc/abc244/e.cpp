#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, s, t, x;
    cin >> n >> m >> k >> s >> t >> x;
    vector<vector<int>> g(n);
    rep (i, m) {
        int u, v;
        --u;
        --v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    return 0;
}
