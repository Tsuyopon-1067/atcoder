#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];

    int ans = 0;
    rep (l, n) {
        int x = a[l];
        reps (r, l, n) {
            chmin(x, a[r]);
            chmax(ans, x*(r-l+1));
        }
    }
    cout << ans << endl;
    return 0;
}
