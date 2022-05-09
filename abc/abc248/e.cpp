#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define reps(i, s, n) for (ll i = (s); i < (ll)(n); ++i)
#define rrep(i, n) for (ll i = (ll)(n-1); i >= 0; --i)
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
    long long n, k;
    cin >> n >> k;
    vector<ll> x(n);
    vector<ll> y(n);
    rep (i, n) cin >> x[i] >> y[i];

    if (k == 0) {
        cout << "Infinity" << endl;
        return 0;
    }
    vector<ll> count(n*n+1);
    rep (i, n-1) reps (j, i+1, n) {
        reps (k, i+1, n) {
            if((x[k]-x[i])*(y[j]-y[i]) == (x[j]-x[i])*(y[k]-y[i])) ++count[n*i + j];
            if((x[k]-x[i])*(y[j]-y[i]) == (x[j]-x[i])*(y[k]-y[i])) printf("%lld %lld %lld\n", i, j, k);
        }

    }
    ll ans = 0;
    rep (i, n*n+1) {
        if (count[i] >= k) ++ans;
    }
    //rep (i, 10) printf("%lld %lld\n", i, count[i]);
    cout << ans << endl;
    return 0;
}
