#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define reps(i, s, n) for (ll i = (s); i < (ll)(n); ++i)
#define rrep(i, n) for (ll i = (ll)(n-1); i >= 0; --i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

vector<ll> make(ll n) {
    vector<ll> res(3);
    rep (i, 3) {
        res[i] = n % 10;
        n /= 10;
    }
    return res;
}
int main() {
    long long n;
    cin >> n;
    string s;
    cin >> s;

    ll ans = 0;
    reps (i, 0, 1000) {
        ll d = 0;
        vector<ll> t = make(i);
        rrep (i, n) {
            if (s[i]-'0' == t[d]) ++d;
            if (d == 3) break;
        }
        if (d == 3) ++ans;
    }
    cout << ans << endl;
    return 0;
}
