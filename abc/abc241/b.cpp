#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 
    map<int, int> mpa;
    rep (i, n) {
        int a;
        cin >> a;
        mpa[a]++;
    }
    vector<int> b(m);
    rep (i, m) {
        cin >> b[i];
    }

    string ans = "Yes"; 
    rep (i, m) {
        mpa[b[i]]--;
        if (mpa[b[i]] < 0) ans = "No"; 
    }
    cout << ans << endl;
    return 0;
}
