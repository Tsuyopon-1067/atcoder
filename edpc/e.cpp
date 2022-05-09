#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
#define INF 2000000000
typedef long long ll;

int main() {
    int n, W;
    cin >> n >> W;
    vector<int> w(n);
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> w[i] >> v[i];

    int VV = 100 * 10000 + 1;

    vector<vector<ll>> dp(n+1, vector<ll>(VV, INF));
    dp[0][0] = 0;
    rep(i, n)rep(j, VV){
        if(dp[i][j] == INF) continue;
        int vidx = j + v[i];
        if (vidx > VV) continue;
        dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
        dp[i+1][vidx] = min(dp[i+1][vidx], dp[i][j] + w[i]);
    }
    
    int ans = 0;
    rep (i, VV) {
        if (dp[n][i] <= W) ans = max(ans, i);
    }
    cout << ans << endl;
    return 0;
}
