#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll x, k, d;
    scanf("%lld %lld %lld", &x, &k, &d);
    ll xa = abs(x);
    ll t = xa / d;
    ll e = xa - t * d;
    if (k < t) {
        printf("%lld\n", xa - k*d);
        return 0;
    }
    if ((k - t) % 2 == 0) {
        printf("%lld\n", e);
        return 0;
    }
    printf("%lld\n", abs(e-d));
    return 0;
}
