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
    long long n, q;
    cin >> n >> q;
    vector<ll> x(q);
    for (auto &xx : x) cin >> xx;

    vector<ll> ball1(n+1);
    vector<ll> ball2(n+1);
    rep (i, n+1) ball1[i] = i;
    rep (i, n+1) ball2[i] = i;

    for (auto xx : x) {
        ll idx = ball1[xx];
        if (ball1[xx] != n) {
            ll idxr = idx + 1;
            ll numr = ball2[idxr];
            swap(ball1[xx], ball1[numr]);
            swap(ball2[idx], ball2[idxr]);
        } else {
            ll numl = ball2[n];
            ll idxl = idx - 1;
            swap(ball1[numl], ball1[xx]);
            swap(ball2[idxl], ball2[idx]);
        }
    }
    reps (i, 1, n+1) printf("%lld ", ball2[i]);
    cout << endl;
    return 0;
}
