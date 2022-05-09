#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    if (n % 2 != 0) {
        cout << -1 << endl;
        return 0;
    }

    string s1 = s.substr(0, n/2);
    string s2 = s.substr(n/2, n);

    int ans = 0;
    rep (i, n/2) {
        if (s1[i] != s2[i]) ++ans;
    }
    cout << ans << endl;
    return 0;
}
