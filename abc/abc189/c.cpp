#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
<<<<<<< HEAD
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
=======
>>>>>>> f4bfbb3109ae0e50a4d2aaf648b5c07d02bf7d67
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
<<<<<<< HEAD

=======
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
>>>>>>> f4bfbb3109ae0e50a4d2aaf648b5c07d02bf7d67
    return 0;
}
