#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    vector<vector<ll>> dp1(n, vector<ll>(2, INFL));
    vector<vector<ll>> dp2(n, vector<ll>(2, INFL));

    dp1[0][1] = a[0];
    rep (i, n-1) {
        if (dp1[i][1] != INFL) {
            dp1[i+1][0] = dp1[i][1];
            dp1[i+1][1] = dp1[i][1] + a[i+1];
        }
        dp1[i+1][1] = min(min(dp1[i][0], dp1[i][1]) + a[i+1], dp1[i+1][1]);
    }
    dp2[0][0] = 0;
    rep (i, n-1) {
        if (dp2[i][1] != INFL) {
            dp2[i+1][0] = dp2[i][1];
            dp2[i+1][1] = dp2[i][1] + a[i+1];
        }
        dp2[i+1][1] = min(min(dp2[i][0], dp2[i][1]) + a[i+1], dp2[i+1][1]);
    }
    dp2[n-1][0] = dp2[n-1][1];

    ll ans = INFL;
    chmin(ans, dp1[n-1][0]);
    chmin(ans, dp1[n-1][1]);
    chmin(ans, dp2[n-1][0]);
    chmin(ans, dp2[n-1][1]);
    cout << ans << endl;

    return 0;
}
