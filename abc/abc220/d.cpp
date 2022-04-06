#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define MOD 998244353
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    vector<vector<ll>> dp(n, vector<ll>(10, 0));
    dp[0][a[0]] = 1;
    reps (i, 1, n) rep (j, 10) {
        int add = (j + a[i]) % 10;
        int pro = (j * a[i]) % 10;
        dp[i][add] += dp[i-1][j];
        dp[i][pro] += dp[i-1][j];

        dp[i][add] %= MOD;
        dp[i][pro] %= MOD;
    }

    rep (j, 10) cout << dp[n-1][j] << endl;
    return 0;
}
