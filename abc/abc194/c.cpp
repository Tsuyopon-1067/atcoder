#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<ll, ll>mp;
    rep (i, n) {
        ll a;
        cin >> a;
        ++mp[a];
    }
    
    ll ans = 0;
    reps (i, -200, 201) reps (j, i+1, 201) {
        ans += mp[i] * mp[j] * pow(i-j, 2);
    }
    cout << ans << endl;
    return 0;
}
