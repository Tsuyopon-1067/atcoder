#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(10);
    rep (i, 10) {
        cin >> a[i];
    }
    int ans = 0;
    rep (i, 3) {
        ans = a[ans];
    }
    cout << ans << endl;
    return 0;
}
