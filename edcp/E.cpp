#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, W;
    cin >> n >> W;
    vector<int> w(n);
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> w[i] >> v[i];

    vector<vector<int>> dp(n+1, vector<int>(W+1, -1));
    dp[0][0] = 0;
    rep(i, n)rep(j, W+1){
        if(dp[i][j] == -1) continue;
        dp[i+1][j] = max(dp[i+1][j], dp[i][j]);
        if(d)
    }
    
    return 0;
}
