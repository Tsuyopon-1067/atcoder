#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define MOD 1000000007
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> c(n);
    for(int i = 0; i < n; ++i) cin >> c[i];
    sort(c.begin(), c.end());
    ll ans = c[0];
    reps (i, 1, n) {
        ans *= c[i]-i;
        ans %= MOD;
    }
    cout << ans << endl;
    return 0;
}
