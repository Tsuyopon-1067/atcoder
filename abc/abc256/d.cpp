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
    long long n;
    cin >> n;
    vector<pair<ll, ll>> lr(n);
    rep(i, n) {
        cin >> lr[i].first;
        cin >> lr[i].second;
    }
    sort(lr.begin(), lr.end());

    vector<ll> kukan(200001, 0);
    rep (i, n) {
        ll l = lr[i].first;
        ll r = lr[i].second;
        kukan[l]++;
        kukan[r]--;
    }

    ll t = 0;
    rep (i, 200001) {
        t += kukan[i];
        if (t - kukan[i] <= 0 && t > 0) printf("%lld ", i);
        if (t - kukan[i] >= 1 && t <= 0) printf("%lld\n", i);
    }
    return 0;
}
