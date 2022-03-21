#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef unsigned long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    ll n, x;
    cin >> n >> x; 
    string s;
    cin >> s;

    vector<char> t(0);
    rep (i, s.size()) {
        if (s[i] == 'U' && t.size() != 0) {
            char tmp = t.back();
            if (tmp == 'L' || tmp == 'R') {
                t.pop_back();
            } else t.push_back(s[i]);
        } else t.push_back(s[i]);
    }
    for (char c : t) {
        switch (c) {
            case 'U':
                x /= 2L;
                if (x == 0) x = 1;
                break;
            case 'L':
                x = x * 2L;
                break;
            case 'R':
                x = x * 2L + 1L;
                break;
        }
    }
    printf("%lld\n", x);

    return 0;
}
