#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
#include <bits/stdc++.h>
using namespace std;

bool judge(char c) {
    if (c == 'A' || c == 'C' || c == 'G' || c == 'T') return true;
    else return false;
}
int main() {
    string s;
    cin >> s;

    int n = s.length();
    int ans = 0;
    rep (i, n) {
        int j = i;
        while (j < n && judge(s[j])) ++j;
        chmax(ans, j-i);
    }
    cout << ans << endl;
    return 0;
}
