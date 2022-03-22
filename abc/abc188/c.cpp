#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int n;
vector<int>a;
int dfs(int game, int p) {
    if (game == n+1) return a[p];
    return max(dfs(game+1, 2*p), dfs(game+1, 2*p+1));
}
int main() {
    cin >> n;
    int nn = (int)pow(2, n);
    a.resize(nn);
    for(int i = 0; i < nn; ++i) cin >> a[i];

    int rate = min(dfs(2, 0), dfs(2, 1));
    int ans = 0;
    rep (i, nn) {
        if (a[i] == rate) ans = i+1;
    }
    cout << ans << endl;
    return 0;
}
