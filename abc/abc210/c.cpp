#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> c(n);
    for(int i = 0; i < n; ++i) cin >> c[i];
    map<int, int> mp;
    int ans = 0;

    rep (i, k) ++mp[c[i]];
    chmax(ans, (int)(mp.size()));
    reps (i, k, n) {
        ++mp[c[i]];
        int tmp = c[i-k];
        --mp[tmp];
        if (mp[tmp] == 0) mp.erase(tmp);
        chmax(ans, (int)(mp.size()));
    }
    cout << ans << endl;
    return 0;
}
