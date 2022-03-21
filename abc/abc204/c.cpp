#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
void dfs(vector<bool> &visit, int v) {
    if (visit[v]) return;
    visit[v] = true;
    for (auto x : g[v]) dfs(visit, x);
}
int main() {
    int n, m;
    cin >> n >> m; 
    g.resize(n+1);
    rep (i, m) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
    }

    ll ans = 0;
    reps (1, i, n+1) {
        vector<bool> visit(n+1, false);
        dfs(visit, i);
        ll k = 0;
        reps (1, j, n+1) {
            if (visit[j]) ++k;
        }
        ans += k;
    }
    cout << ans << endl;
    return 0;
}
