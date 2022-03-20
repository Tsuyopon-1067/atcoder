#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int d(vector<int> t) {
    int res = 1;
    rep (i, 3) reps (j, i+1, 3) {
        if (i == j) continue;
        res *= (t[i] - t[j]);
    }

    return res;
}
int main() {
    map<int, char>mp;
    mp['R'] = 0;
    mp['G'] = 1;
    mp['B'] = 2;
    vector<int> s(3);
    vector<int> t(3);
    rep (i, 3) {
        char tmp;
        cin >> tmp;
        s[i] = mp[tmp];
    }
    rep (i, 3) {
        char tmp;
        cin >> tmp;
        t[i] = mp[tmp];
    }

    int sgns = d(t) / d(s);

    if (sgns == 1) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
