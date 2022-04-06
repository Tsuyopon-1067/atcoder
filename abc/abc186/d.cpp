#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    sort(a.begin(), a.end(), greater<ll>());

    ll ans = 0;
    ll j = 0;
    reps (i, 1, n) j += a[i];
    rep (i, n-1) {
        ans += a[i]*(n-i-1) - j;
        j -= a[i+1];
    }
    cout << ans << endl;
    return 0;
}
