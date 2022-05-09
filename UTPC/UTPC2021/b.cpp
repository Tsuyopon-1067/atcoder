#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    rep (i, t) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        vector<int> ab(2*n);
        rep (j, n) ab[j] = a[j];
        rep (j, n) ab[j+n] = b[j];
        sort(ab.begin(), ab.end());

        map<int, int>mp;
        rep (j, n) {
            mp[ab[2*j]] = 0;
            mp[ab[2*j+1]] = 1;
        }

        int ca = 0;
        rep (i, n) {
            if (mp[a[i]] == 0) ++ca;
        }

        int d = abs(ca - n);
        rep (i, n) {
            if (d > 0 && mp[a[i]] == 1) {
                swap(a[i], b[i]);
                --d;
            } else if (d < 0 && mp[a[i]] == 0) {
                swap(a[i], b[i]);
                ++d;
            }
        }

        for(auto x : a) cout << x << " ";
        cout << endl;
        for(auto x : b) cout << x << " ";
        cout << endl;
    }
    return 0;
}
