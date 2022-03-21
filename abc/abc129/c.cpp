#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007

int main() {
    int n, m;
    cin >> n >> m; 
    vector<bool> a(n, false);
    rep (i, m) {
        int aa;
        cin >> aa;
        a[aa] = true;
    }
    vector<ll> dp(n+1, 0);
    dp[0] = 1;
    rep (i, n) {
        if (a[i]) dp[i] = 0;
        dp[i+1] = (dp[i+1] + dp[i]) % MOD;
        int idx2 = i + 2;
        if (idx2 <= n) dp[idx2] = (dp[idx2] + dp[i]) % MOD;
    }
    cout << dp[n] << endl;
    return 0;
}
