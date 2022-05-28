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
    long long q;
    cin >> q;
    map<ll, ll>mp;
    ll mx, mi;
    mx = -1;
    mi = INFL;

    set<ll>stm;
    set<ll, greater<ll>>stx;
    rep (i, q) {
        long long n;
        cin >> n;
        if (n == 1) {
            long long x;
            cin >> x;
            ++mp[x];
            chmax(mx, x);
            chmin(mi, x);
            stm.insert(x);
            stx.insert(x);
        } else if (n == 2) {
            long long x, c;
            cin >> x >> c;
            mp[x] -= (ll)min(mp[x], c);
            if (mp[x] <= 0) {
                stm.erase(x);
                stx.erase(x);
                if (x <= mi) {
                    auto itr = stm.begin();
                    mi = *itr;
                }
                if (x >= mx) {
                    auto itr = stm.begin();
                    mx = *itr;
                }
            }
        } else {
            auto itrm = stm.begin();
            auto itrx = stx.begin();
            cout << *itrx - *itrm << endl;
        }
    }
    return 0;
}
