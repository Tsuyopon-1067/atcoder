#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

vector<int> a;
vector<int> b;
bool ans = false;
int n, x;

int main() {
    cin >> n >> x;
    a.resize(n);
    b.resize(n);
    rep (i, n) {
        cin >> a[i] >> b[i];
    }
    vector<vector<bool>> dp(n+1, vector<bool>(x+1, false));
    dp[0][0] = true;
    reps (0, i, n) {
        rep (j, x) {
            if (dp[i][j]) {
                int ai = j + a[i];
                int bi = j + b[i];
                if (ai <= x) dp[i+1][ai] = true;
                if (bi <= x) dp[i+1][bi] = true;
            }
        }
    }
    if (dp[n][x]) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
