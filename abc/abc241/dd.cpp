#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<ll> a;

    rep (i, q) {
        int n, x, k;
        cin >> n >> x;
        switch (n) {
            case 1:
                a.push_back(x);
                sort(a.begin(), a.end());

                    for(auto x : a) printf("%lld ", x);
                    cout << endl;
                break;
            case 2:
                {
                    cin >> k;
                    auto lit = lower_bound(a.begin(), a.end(), x);
                    int l = distance(a.begin(), lit);

                    for(auto x : a) printf("%lld ", x);
                    cout << endl;
                    printf("l-k=%d-%d\n", l,k);

                    if (l-k < 0) cout << -1 << endl;
                    else cout << a[l-k] << endl;
                }
                break;
            case 3:
                {
                    cin >> k;
                    auto lit = lower_bound(a.begin(), a.end(), x);
                    int l = distance(a.begin(), lit);

                    for(auto x : a) printf("%lld ", x);
                    cout << endl;
                    printf("l+k-1=%d+%d-1\n", l,k);

                    if (l+k-1 >= (int)a.size()) cout << -1 << endl;
                    else cout << a[l+k-1] << endl;
                }
                break;
        }
    }
    return 0;
}
