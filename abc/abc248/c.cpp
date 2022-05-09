#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define reps(i, s, n) for (ll i = (s); i < (ll)(n); ++i)
#define rrep(i, n) for (ll i = (ll)(n-1); i >= 0; --i)
#define MOD 998244353
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> int count_digit(T n) { int res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;
    vector<vector<ll>> dp(n+1, vector<ll>(n*k+1, 0));
    reps (i, 1, m+1) {
        if (i > k) continue;
        dp[1][i] = 1;
    }
    reps (i, 1, n) {
        reps (j, 1, k+1) {
            if (dp[i][j] == 0) continue;
            reps (l, 1, m+1) {
                ll jj = j + l;
                if (jj > k) continue;

                dp[i+1][jj] += dp[i][j];
                dp[i+1][jj] %= MOD;
            }
        }
    }
    
    ll ans = 0;
    reps (j, 1, k+1) {
        ans += dp[n][j];
        ans %= MOD;
    }

    cout << ans << endl;
    return 0;
}
