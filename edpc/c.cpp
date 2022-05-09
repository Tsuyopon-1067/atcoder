#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);
    vector<long long> c(n);
    rep(i, n) cin >> a[i] >> b[i] >> c[i];

    vector<vector<long long>> dp(n, vector<long long>(3));
    dp[0][0] = a[0];
    dp[0][1] = b[0];
    dp[0][2] = c[0];
    reps(1, i, n){
        dp[i][0] = max(dp[i-1][1] + a[i], dp[i-1][2] + a[i]);
        dp[i][1] = max(dp[i-1][2] + b[i], dp[i-1][0] + b[i]);
        dp[i][2] = max(dp[i-1][0] + c[i], dp[i-1][1] + c[i]);
    }

    long long ans = 0;
    rep(i, 3) ans = max(ans, dp[n-1][i]);
    cout << ans << endl;
    return 0;
}
