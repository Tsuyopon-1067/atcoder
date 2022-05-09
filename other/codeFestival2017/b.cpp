#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int e = 0;
    rep (i, n) {
        int a;
        cin >> a;
        if (a%2 == 0) ++e;
    }

    ll ans = pow(3, n) - pow(2, e);
    cout << ans << endl;
    return 0;
}
