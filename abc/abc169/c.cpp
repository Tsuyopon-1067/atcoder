#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll a, b1, b2;
    scanf("%lld %lld.%lld", &a, &b1, &b2);
    ll b = b1 * 100 + b2;
    printf("%lld\n", (ll)(a*b/100));
    return 0;
}
