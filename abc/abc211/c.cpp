#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define repe(i, n) for (auto i = (i) : n)
#define MOD 1000000007
#define INF 2000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    t = "chokudai";

    int n = (int)s.length();
    vector<vector<ll>> dp(8, vector<ll>(n, 0));

    rep (i, 8) {
        int k = -1;
        rep (j, n) {
            if (s[j] == t[i]) ++k;
            if (i == 0) {
                dp[i][j] = k+1;
                continue;
            }
            if (k == -1) continue;
            dp[i][j] = k;
            if (i-1 >= 0) dp[i][j] += dp[i-1][j];
            dp[i][j] = dp[i][j] % MOD;
        }
        
    }
    printf("%lld\n", dp[7][n-1]);
    rep (i, 8) {
        for (auto x : dp[i]) printf("%lld ", x);
            cout << endl;
    }

    return 0;
}
