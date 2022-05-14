#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define reps(i, s, n) for (ll i = (s); i < (ll)(n); ++i)
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

ll gcd(ll a, ll b) {
    if (a % b == 0) return b;
    else return gcd(b, a%b);
}
int main() {
    long long a, b;
    cin >> a >> b;
    ll ans = 0;
    reps (x, a, b) reps (y, x+1, b+1) {
        chmax(ans, gcd(x, y));
    }
    cout << ans << endl;
    return 0;
}
