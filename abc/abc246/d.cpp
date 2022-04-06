#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

ll f(ll a, ll b) { return a*a*a + a*a*b + a*b*b + b*b*b; }
int main() {
    long long n;
    cin >> n;

    ll a = 0;
    while (a*a*a < n) ++a;
    
    ll b = 0;
    ll ans = f(a, b);
    while (a > 0) {
        while (f(a, b) < n) ++b;
        chmin(ans, f(a, b));

        --a;
    }
    cout << ans << endl;
    return 0;
}
