#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define INF 2000000000
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int ans = 0;
    int k = 1;
    rep (i, n) {
        if (a[i] != k) ++ans;
        else ++k;
    }
    if (ans == n) ans = -1;
    cout << ans << endl;
    return 0;
}
