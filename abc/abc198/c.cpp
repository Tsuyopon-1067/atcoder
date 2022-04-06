#include <bits/stdc++.h>
using namespace std;

int main() {
    long long r, x, y, d2, ans;
    cin >> r >> x >> y;
    d2 = x*x + y*y;
    double d = sqrt(d2);
    ans = d / r;
    if (d == r) ans = 1;
    else if (d2 < 4*r*r) ans = 2;
    else if (d2 != ans*ans*r*r) ++ans;
    cout << ans << endl;
    return 0;
}
