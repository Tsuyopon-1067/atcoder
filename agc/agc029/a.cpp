#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    ll ans = 0;
    ll k = 0;
    rep (i, s.length()) {
        if (s[i] == 'W') {
            ans += i - k;
            ++k;
        }
    }
    cout << ans << endl;
    return 0;
}
