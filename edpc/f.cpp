#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> int count_digit(T n) { int res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int ns = s.length();
    int nt = t.length();
    vector<vector<int>> dp(ns+1, vector<int>(nt+1, 0));

    reps (i, 1, ns+1) reps (j, 1, nt+1) {
        if (s[i-1] == t[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
        else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
    }

    int len = 0;
    reps (i, 1, ns+1) chmax(len, dp[i][nt]);
    vector<int> ans;

    int i = ns;
    int j = nt;
    while (len > 0) {
        if (s[i] == t[j]) {
            --i;
            --j;
            --len;
            ans.push_back(s[i]);
        } else if (dp[i][j] == dp[i-1][j]) --i;
        else --j;
    }
    reverse(ans.begin(), ans.end());
    for(auto x : ans) printf("%c", x);
    cout << endl;

    return 0;
}
