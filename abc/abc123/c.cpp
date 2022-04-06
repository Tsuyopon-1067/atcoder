#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, a, b, c, d, e;
    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cin >> e;

    ll min = a;
    if (min > b) min = b;
    if (min > c) min = c;
    if (min > d) min = d;
    if (min > e) min = e;

    ll ans = (n-1) / min + 1;
    cout << ans + 4 << endl;

    return 0;
}
