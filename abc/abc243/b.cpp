#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    for(int i = 0; i < n; ++i) cin >> b[i];

    int ans1 = 0;
    rep (i, n) {
        if (a[i] == b[i]) ++ans1;
    }

    map<int, int> ka;
    rep (i, n) ++ka[a[i]];
    map<int, int> kb;
    rep (i, n) ++kb[b[i]];

    int ans2 = 0;
    unique(a.begin(), a.end());
    for (auto x : a) {
        ans2 += min(ka[x], kb[x]);
    }
    ans2 -= ans1;

    cout << ans1 << endl;
    cout << ans2 << endl;
    return 0;
}
