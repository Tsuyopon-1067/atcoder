#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#define ll long long

#include <bits/stdc++.h>
using namespace std;

vector<vector<ll>> a;
int ans = 0;
ll n, x;
void dfs(ll pro, ll bag) {
    if (bag == n) {
        if (pro == x) ans++;
        return;
    }
    for (ll b : a[bag]) {
        if (pro > x/b) continue;
        dfs(pro*b, bag+1);
    }
}
int main() {
    cin >> n >> x;

    a.resize(n);
    vector<ll> l(n);
    rep (i, n) {
        ll l;
        cin >> l;
        a[i].resize(l);
        rep (j, l) cin >> a[i][j];
    }
    dfs(1, 0);
    cout << ans << endl;
    return 0;
}
