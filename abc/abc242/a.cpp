#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    double a, b, c, x;
    cin >> a >> b >> c >> x;
    if (x <= a) {
        cout << 1 << endl;
        return 0;
    }
    if (x <= b) {
        double ans = c/(b-a);
        printf("%lf\n", ans);
    } else cout << 0 << endl;
    return 0;
}
