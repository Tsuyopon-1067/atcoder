#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> int count_digit(T n) { int res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    vector<vector<bool>> dp(2, vector<bool>(n));
    dp[0][0] = true;
    dp[1][0] = true;
    rep (i, n) {
        if (dp[0][i]) {
            ll ta = abs(a[i] - a[i+1]);
            if (ta <= k) dp[0][i+1] = true;
            ll tb = abs(a[i] - b[i+1]);
            if (tb <= k) dp[1][i+1] = true;
        }
        if (dp[1][i]) {
            ll ta = abs(b[i] - a[i+1]);
            if (ta <= k) dp[0][i+1] = true;
            ll tb = abs(b[i] - b[i+1]);
            if (tb <= k) dp[1][i+1] = true;
        }
    }
    if (dp[0][n-1] || dp[1][n-1]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
