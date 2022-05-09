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
    long long q;
    cin >> q;

    deque<pair<ll, ll>> que;
    rep (i, q) {
        long long n;
        cin >> n;
        ll x, c;
        if (n == 1) {
            cin >> x >> c;
            pair<ll, ll> tmp;
            tmp.first = x;
            tmp.second = c;
            que.push_front(tmp);
        } else if (n == 2) {
            cin >> c;
            ll sum = 0;
            while (c > 0) {
                pair<ll, ll> tmp = que.back();
                que.pop_back();

                ll k = min(c, tmp.second);
                c -= k;
                tmp.second -= k;

                sum += tmp.first * k;
                if (tmp.second > 0) que.push_back(tmp);
            }
            cout << sum << endl;
        }
    }
    return 0;
}
