#define INF 2000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    int ans = INF;
    for (int i = 0; i <= 100000; ++i) {
        int an = max(0, x-i);
        int bn = max(0, y-i);
        chmin(ans, an*a + bn*b + c*2*i);
    }

    cout << ans << endl;
    return 0;
}
