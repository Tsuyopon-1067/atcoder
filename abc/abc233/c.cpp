#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#define ll long long

#include <bits/stdc++.h>
using namespace std;

int main() {
    ll n, x;
    cin >> n >> x;

    vector<ll> l(n);
    vector<vector<ll>> a(n);
    rep (i, n) {
        cin >> l[i];
        rep (j, l[i]) cin >> a[i][j];
    }
    return 0;
}
