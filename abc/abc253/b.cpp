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
    long long h, w;
    cin >> h >> w;
    pair<ll, ll> pa;
    pair<ll, ll> pb;
    ll k = 0;

    rep (i, h) rep (j, w) {
        char c;
        cin >> c;
        if (c == 'o') {
            if (k == 0) {
                pa.first = i;
                pa.second= j;
                k = 1;
            } else {
                pb.first = i;
                pb.second= j;
            }
        }
    }
    ll ans = abs(pa.first - pb.first) + abs(pa.second - pb.second);
    cout << ans << endl;
    return 0;
}
