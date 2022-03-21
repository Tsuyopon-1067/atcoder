#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

vector<int> t;
vector<int> k;
vector<vector<int>> a;
vector<bool> acquired;
ll ans = 0;

void dfs(int v) {
    if (!acquired[v]) {
        ans += t[v];
        acquired[v] = true;
    } else return;
    if (k[v] == 0) return;
    for (auto x : a[v]) dfs(x);
}
int main() {
    int n;
    cin >> n;
    t.resize(n+1);
    k.resize(n+1);
    a.resize(n+1);
    acquired.resize(n+1);
    rep (i, n+1) acquired[i] = false;
    reps (1, i, n+1) {
        cin >> t[i] >> k[i];
        rep (j, k[i]) {
            int tmp;
            cin >> tmp;
            a[i].push_back(tmp);
        }
    }

    dfs(n);
    cout << ans << endl;
    return 0;
}
