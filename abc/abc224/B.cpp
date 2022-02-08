#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<int>> a(h, vector<int>(w));
    rep(i, h)rep(j, w) cin >> a[i][j];

    bool ans = true;
    rep(i1, h)reps(i1+1, i2, h)rep(j1, w)reps(j1+1, j2, w){
        if(a[i1][j1]+a[i2][j2] > a[i2][j1]+a[i1][j2]) ans = false;
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
