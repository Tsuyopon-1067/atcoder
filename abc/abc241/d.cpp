#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<ll> a;

    vector<int> nv(q);
    vector<int> xv(q);
    vector<int> kv(q);
    rep (i, q) {
        cin >> nv[i] >> xv[i];
        if (nv[i] != 1) cin >> kv[i];
        else kv[i] = -1;
    }
    rep (i, q) {
        int n, x, k;
        n = nv[i];
        x = xv[i];
        k = kv[i];
        switch (n) {
            case 1:
                a.push_back(x);
                sort(a.begin(), a.end());
                break;
            case 2:
                {
                    auto lit = lower_bound(a.begin(), a.end(), x);
                    int l = distance(a.begin(), lit);

                    if (l-k < 0) cout << -1 << endl;
                    else cout << a[l-k] << endl;
                }
                break;
            case 3:
                {
                    auto lit = lower_bound(a.begin(), a.end(), x);
                    int l = distance(a.begin(), lit);

                    if (l+k-1 >= (int)a.size()) cout << -1 << endl;
                    else cout << a[l+k-1] << endl;
                }
                break;
        }
    }
    return 0;
}
