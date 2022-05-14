#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> long long count_digit(T n) { long long res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, w;
    cin >> n >> w;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;
    vector<bool> flag(w+1, false);
    
    sort(a.begin(), a.end());
    rep (i, n) {
        if (a[i] > w) n = i;
    }

    ll ans = 0;
    
    rep (i, n) {
        ll sum = a[i];
        if (sum <= w) flag[sum] = true;
    }
    rep (i, n) reps (j, i+1, n) {
        ll sum = a[i] + a[j];
        if (sum <= w) flag[sum] = true;
    }
    rep (i, n) reps (j, i+1, n) reps (k, j+1, n) {
        ll sum = a[i] + a[j] + a[k];
        if (sum <= w) flag[sum] = true;
    }
    rep (i, w+1) {
        if (flag[i]) ++ans;
    }
    cout << ans << endl;
    return 0;
}
