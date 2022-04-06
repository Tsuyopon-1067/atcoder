#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int abs(int n) {
    return n > 0 ? n : -n;
}
int gcd(int a, int b) {
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}
int main() {
    int n, x;
    cin >> n >> x;
    vector<int> xx(n);
    for(int i = 0; i < n; ++i) cin >> xx[i];
    vector<int> dif(n);
    rep (i, n) dif[i] = abs(x - xx[i]);

    int ans = dif[0];
    rep (i, n) {
        ans = gcd(dif[i], ans);
    }
    cout << ans << endl;
    return 0;
}
