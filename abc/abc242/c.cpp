#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
#define MOD 998244353
typedef long long ll;

int main() {
    int n;
    cin >> n;
    vector<vector<ll>> x(n, vector<ll>(9, 0));
    rep (j, 9) x[0][j] = 1;

    rep (i, n-1) rep (j, 9) {
                    x[i+1][j] = (x[i+1][j] + x[i][j]) % MOD;
        if (j != 0) x[i+1][j] = (x[i+1][j] + x[i][j-1]) % MOD;
        if (j != 8) x[i+1][j] = (x[i+1][j] + x[i][j+1]) % MOD;
    }
    ll ans = 0;
    rep (j, 9) ans = (ans + x[n-1][j]) % MOD;
    cout << ans << endl;

    return 0;
}
