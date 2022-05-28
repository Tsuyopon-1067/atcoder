#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 998244353
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> long long count_digit(T n) { long long res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    vector<vector<ll>> dp(n+1, vector<ll>(m+1, 0));
    reps (i, 1, m+1) dp[1][i] = 1;

    reps (i, 1, n) {
        ll s = 0;
        reps (j, 1+k, m+1) {
            s += dp[i][j];
            s %= MOD;
        }
        reps (j, 1, m+1) {
            dp[i+1][j] += s;
            dp[i+1][j] %= MOD;
            if (j-k+1 >= 1) s += dp[i][j-k+1];
            s = s % MOD + MOD;
            if (j+k <= m) s -= dp[i][j+k];
            s %= MOD;
        }
    }

    ll ans = 0;
    rep (i, m+1) {
        ans += dp[n][i];
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
