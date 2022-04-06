#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

vector<int> p(int n) {
    vector<int> res;
    for (int i = 2; i*i <= n; ++i) {
        if (n % i != 0) continue;
        while (n%i == 0) n /= i;
        res.push_back(i);
    }
    if (n != 1) res.push_back(n);
    return res;
}
int main() {
    int n, m;
    cin >> n >> m;

    vector<bool> flag(m+1, false);
    rep (i, n) {
        int a;
        cin >> a;
        vector<int> lst = p(a);
        for (auto x : lst) {
            if (flag[x]) continue;
            for (int i = x; i <= m; i += x) {
                flag[i] = true;
            }
        }
    }
    int ans = 0;
    vector<int> anslst;
    reps (i, 1, m+1) {
        if (flag[i] == false) {
            ++ans;
            anslst.push_back(i);
        }
    }
    cout << ans << endl;
    for (auto x : anslst) cout << x << endl;
    return 0;
}
