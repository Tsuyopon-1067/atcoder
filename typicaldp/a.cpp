#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (auto &x : p) cin >> x;

    vector<vector<int>> dp(n+1, vector<int>(10001, 0));
    dp[0][0] = 1;
    rep (i, n) rep (j, 10000) {
        if (dp[i][j] == 0) continue;
        dp[i+1][j] = dp[i][j];
        dp[i+1][j+p[i]] = dp[i][j];
    }
    
    int ans = 0;
    for (auto x : dp[n]) {
        if (x > 0) ++ans;
    }
    cout << ans << endl;
    return 0;
}
