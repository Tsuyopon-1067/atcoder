#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define repe(i, n) for (auto i = (i) : n)
#define MOD 1000000007
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s;
    t = "chokudai";

    int n = (int)s.length();
    vector<vector<ll>> dp(8, vector<ll>(n, 0));

    rep (j, n) {
        if (j-1 >= 0) dp[0][j] = dp[0][j-1];
        if (s[j] == t[0]) {
            ++dp[0][j];
        }
    }
    reps (i, 1, 8) {
        rep (j, n) {
            if (j-1 >= 0) {
                dp[i][j] += dp[i][j-1];
                if (s[j] == t[i]) dp[i][j] += dp[i-1][j-1];
            }
            dp[i][j] %= MOD;
        }
        
    }
    printf("%lld\n", dp[7][n-1]);
    return 0;
}
