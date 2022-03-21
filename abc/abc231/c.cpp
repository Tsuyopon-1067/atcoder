#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q; 
    vector<int> a(n);
    for(int i = 0; i < n; ++i) cin >> a[i];
    sort(a.begin(), a.end());

    rep (i, q) {
        int x;
        cin >> x;
        auto itr = lower_bound(a.begin(), a.end(), x);
        int dis = distance(itr, a.end());
        cout << dis << endl;
    }
    return 0;
}
