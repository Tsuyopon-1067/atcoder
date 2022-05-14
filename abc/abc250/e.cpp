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
    vector<ll> b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    long long q;
    cin >> q;
    vector<ll> x(q);
    vector<ll> y(q);
    rep (i, q) cin >> x[i] >> y[i];

    vector<ll> sameAtoB(n+1, INFL);
    vector<ll> sameBtoA(n+1, INFL);
    ll j = 0;
    set<ll>stb;
    rep (i, n) {
        ll aa = a[i];
        while (j < n) {
            stb.insert(b[j]);
            if (stb.find(aa) != stb.end()) {
                sameAtoB[i+1] = j+1;
                break;
            }
            ++j;
        }
    }
    j = 0;
    set<ll>sta;
    rep (i, n) {
        ll bb = b[i];
        while (j < n) {
            sta.insert(a[j]);
            if (sta.find(bb) != sta.end()) {
                sameBtoA[i+1] = j+1;
                break;
            }
            ++j;
        }
    }

    rep (i, q) {
        ll xx = x[i];
        ll yy = y[i];
        if (sameAtoB[xx] <= yy && sameBtoA[yy] <= xx) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
