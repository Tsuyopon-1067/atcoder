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
    long long n, x, y;
    cin >> n >> x >> y;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    vector<ll> l;
    vector<ll> r;
    rep (i, n) {
        if (a[i] == x) l.push_back(i);
        if (a[i] == y) r.push_back(i);
    }

    vector<ll> lst;
    for (auto x : l) lst.push_back(x);
    for (auto x : r) lst.push_back(x);
    sort(lst.begin(), lst.end());
    sort(l.begin(), l.end());
    sort(r.begin(), r.end());
    lst.erase(std::unique(lst.begin(), lst.end()), lst.end());

    ll ans = 0;
    set<ll>st;
    for (auto x : l) {
        auto itr = lower_bound(r.begin(), r.end(), x);
        int idx = distance(r.begin(), itr);
        //ans += (n-idx);
        st.insert(idx);
    }
    for (auto x : r) {
        auto itr = lower_bound(l.begin(), l.end(), x);
        int idx = distance(l.begin(), itr);
        //ans += (n-idx);
        st.insert(idx);
    }
    for (auto x : st) {
        ans += (n - x);
    }
    cout << ans << endl;

    return 0;
}
