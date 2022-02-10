#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
#define ll long long
#define MOD 998244353;
using namespace std;

int digit (ll n) {
    int res = 0;
    while (n > 0) {
        n /= 10;
        res++;
    }
    return res;
}
int main() {
    ll n;
    cin >> n;

    ll dig = digit(n);

    ll ans = 0;
    rep(i, dig) {
        ll d0 = (ll)pow(10, i) % MOD;
        ll d0d0 = (d0 * d0) % MOD;
        ll p = min((ll)pow(10, i+1)-1, n) % MOD;
        ll pp = (p * p) % MOD;
        ll p2 = (p * 2) % MOD;
        ll p3 = (p * 3) % MOD;
        ll d0p2 = (d0 * p2) % MOD;
        ll d03 = (d0 * 3) % MOD;

        ll inc = (pp + p3 - d0p2 + d0d0 - d03 + 2L);
        inc %= MOD;
        ans += inc;
        ans %= MOD;
    }
    ans *= 499122177;
    ans %= MOD;
    cout << ans << endl;
    return 0;
}
