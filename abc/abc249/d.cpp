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
    long long n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    set<ll>st;
    map<ll, ll>c;
    for (auto x : a) {
        st.insert(x);
        ++c[x];
    }

    ll ans = 0;
    rep (i, n) {
        for (ll j = 1; j*j <= a[i]; ++j) {
            if (a[i] % j == 0) {
                ll t = a[i] / j;
                if (st.find(j) != st.end() && st.find(t) != st.end()) {
                    ll kk = c[j]*c[t];
                    if (j == t) ans += kk;
                    else ans += 2*kk;
                }
            }
        }
    }
    cout << ans << endl;
    return 0;
}
