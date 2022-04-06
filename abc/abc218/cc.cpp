#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int n;
vector<string> s;
vector<string> t;
vector<string> rotate(vector<string> s) {
    vector<string> res = s;
    rep (i, n) rep(j, n) res[i][j] = s[n-j-1][i];
    return res;
}
int sti(vector<string> st) {
    rep (i, n) rep (j, n) {
        if (st[i][j] == '#') return i;
    }
    return 0;
}
int stj(vector<string> st) {
    rep (j, n) rep (i, n) {
        if (st[i][j] == '#') return j;
    }
    return 0;
}

bool is_contain() {
    int suli = sti(s);
    int sulj = stj(s);
    int tuli = sti(t);
    int tulj = stj(t);

    bool res = true;
    printf("%d %d %d %d\n", suli, sulj, tuli, tulj);
    rep (i, n) rep (j, n) {
        int si = suli + i;
        int sj = sulj + j;
        int ti = tuli + i;
        int tj = tulj + j;
        if (si >= n || sj >= n || ti >= n || tj >= n) continue;
        printf("%c %c\n", s[si][sj], t[ti][tj]);
        if (s[si][sj] != t[ti][tj]) res = false;
    }
    return res;
}
void show() {
    cout << "=================" << endl;
    rep (i, n) cout << s[i] << endl;
    cout << "-----------------" << endl;
    rep (i, n) cout << t[i] << endl;
    cout << "=================" << endl;
}
int main() {
    cin >> n;
    s.resize(n);
    t.resize(n);
    rep (i, n) cin >> s[i];
    rep (i, n) cin >> t[i];

    bool ans = is_contain();
    cout << (ans ? "o" : "x") << endl;
    show();
    s = rotate(s);
    ans = is_contain();
    cout << (ans ? "o" : "x") << endl;
    show();
    s = rotate(s);
    ans = is_contain();
    cout << (ans ? "o" : "x") << endl;
    show();
    s = rotate(s);
    ans = is_contain();
    cout << (ans ? "o" : "x") << endl;
    show();
    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}
