#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, h, w;
    cin >> n >> h >> w;
    int ans = 0;
    rep (i, n) {
        int a, b;
        cin >> a >> b;
        if (h <= a && w <= b) ++ans;
    }
    cout << ans << endl;
    return 0;
}
