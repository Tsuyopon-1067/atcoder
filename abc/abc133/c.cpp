#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define reps(i, s, n) for (ll i = (s); i < (n); ++i)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void chmin (ll& a, ll b) {
    if (a > b) a = b;
}
void chmax (ll& a, ll b) {
    if (a < b) a = b;
}
int main() {
    ll l, r;
    scanf("%lld %lld", &l, &r);
    ll s = 2018;
    ll e = 0;
    if (r - l >= 2018) {
        s = 0;
        e = 2018;
    } else {
        reps(i, l, r+1) {
            chmin(s, i%2019);
            chmax(e, i%2019);
        }
    }

    ll ans = 2018;
    reps (i, s, e+1) reps (j, s, e+1) {
        if (i == j) continue;
        chmin (ans, (i*j)%2019);
    }

    printf("%lld\n", ans);
    return 0;
}
