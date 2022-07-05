#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define INF 2000000000;
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    rep (i, n) cin >> a[i];
    rep (i, m) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans = INF;
    int ai = 0, bi = 0;
    while (ai < n && bi < m) {
        chmin(ans, abs(a[ai] - b[bi]));
        if (a[ai] < b[bi]) ++ai;
        else ++bi;
    }
    cout << ans << endl;
    return 0;
}
