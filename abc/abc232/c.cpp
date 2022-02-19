#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ta(n, vector<int>(n));
    vector<vector<int>> ao(n, vector<int>(n));
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        ta[a-1][b-1] = 1;
        ta[b-1][a-1] = 1;
    }
    rep(i, m) {
        int c, d;
        cin >> c >> d;
        ao[c-1][d-1] = 1;
        ao[d-1][c-1] = 1;
    }
    
    bool ans = false;
    vector<int> v(n);
    rep (i, n) v[i] = i;
    do {
        bool flag = true;
        rep (i, n) rep (j, n) {
            if (ta[i][j] != ao[v[i]][v[j]]) flag = false;
        }
        if (flag) ans = true;
    } while (next_permutation(v.begin(), v.end()));
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
