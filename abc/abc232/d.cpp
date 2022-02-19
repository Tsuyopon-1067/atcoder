#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    
    vector<vector<char>> c(h, vector<char>(w));
    rep(i, h)rep(j, w) cin >> c[i][j];
    vector<vector<int>> dp(h, vector<int>(w));
    dp[0][0] = 1;

    rep(i, h)rep(j, w) {
        if (i == 0 && j == 0) continue;
        if (c[i][j] != '#') {
            if (i > 0 && dp[i-1][j] != 0) dp[i][j] = max(dp[i][j], dp[i-1][j]+1);
            if (j > 0 && dp[i][j-1] != 0) dp[i][j] = max(dp[i][j], dp[i][j-1]+1);
        }
    }
    int ans = 0;
    rep(i, h)rep(j, w){
        ans = max(ans, dp[i][j]);
    }
    cout << ans << endl;
    return 0;
}
