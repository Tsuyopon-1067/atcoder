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
    long long n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    rep (i, n) cin >> a[i] >> b[i];

    map<ll, ll> mp;
    rep (i, n) mp[a[i]] = 0;
    rep (i, n) mp[a[i]] += b[i];

    sort(a.begin(), a.end());
    a.erase(std::unique(a.begin(), a.end()), a.end());

    ll ans = 0;
    for (auto x : a) {
        if (ans + k < x) break;
        ans += x;
        k -= x;
        k += mp[x];
    }
    ans += k;
    cout << ans << endl;
    return 0;
}
