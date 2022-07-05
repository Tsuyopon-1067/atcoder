#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, m;
    cin >> n >> m;
    vector<ll> p(m);
    vector<ll> y(m);
    vector<vector<pair<ll, ll>>> citie(n+1); // year code
    vector<pair<ll, ll>> ans(m);

    rep (i, m) {
        cin >> p[i] >> y[i];
        citie[p[i]].push_back({y[i], i});
    }
    reps (i, 1, n+1) {
        if (citie[i].size() == 0) continue;
        sort(citie[i].begin(), citie[i].end());
        ll nn = (ll)citie[i].size();
        rep (j, nn) {
            ll idx = citie[i][j].second;
            ans[idx].first = i;
            ans[idx].second = j+1;
        }
    }
    rep (i, m) {
        printf("%06lld%06lld\n", ans[i].first, ans[i].second);
    }
    return 0;
}
