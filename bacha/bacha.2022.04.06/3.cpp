#define reps(i, s, n) for (ll i = (s); i < (ll)(n); ++i)
template <typename T> int count_digit(T n) { int res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

ll f(ll n) {
    ll res = 0;
    while (n > 0) {
        res += n % 10;
        n /= 10;
    }
    return res;
}
int main() {
    long long n;
    cin >> n;
    ll d = count_digit(n);
    ll ans = 0;
    vector<ll> lst;
    reps (i, n-d*9, n+1) {
        if (i + f(i) == n) {
            ++ans;
            lst.push_back(i);
        }
    }
    cout << ans << endl;
    for(auto x : lst) cout << x << endl;
    return 0;
}
