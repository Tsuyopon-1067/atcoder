#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a, z;
    rep (i, s.size()) {
        if (s[i] == 'A') {
            a = i;
            break;
        }
    }
    rep (i, s.size()) {
        if (s[s.size()-1-i] == 'Z') {
            z = s.size()-1-i;
            break;
        }
    }
    cout << z-a+1 << endl;
    return 0;
}
