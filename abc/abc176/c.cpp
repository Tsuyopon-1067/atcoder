#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    long long ans = 0;
    rep (i, n-1) {
        if (a[i] > a[i+1]) {
            ans += a[i] - a[i+1];
            a[i+1] = a[i];
        }
    }
    cout << ans << endl;
    return 0;
}
