#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll c2(ll n) {
    return n*(n-1)/2;
}
int main() {
    int n;
    cin >> n;
    map<int, int>mp;
    set<int>st;
    vector<int> a(n);
    rep (i, n) {
        cin >> a[i];
        st.insert(a[i]);
        ++mp[a[i]];
    }
    map<int, int>mpc;
    for (auto x : a) {
        mpc[x] = c2(mp[x]);
    }

    ll sum = 0;
    for (auto x : st) sum += c2(mp[x]);

    rep (i, n) {
        ll ans = sum;
        ans -= c2(mp[a[i]]);
        ans += c2(mp[a[i]]-1);
        printf("%lld\n", ans);
    }
    return 0;
}
