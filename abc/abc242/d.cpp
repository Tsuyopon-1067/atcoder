#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    string s;
    cin >> s;
    int q;
    cin >> q;

    char a[3] = {'a', 'b', 'c'};
    map<char, int> cmp;
    cmp['a'] = 0;
    cmp['b'] = 1;
    cmp['c'] = 2;

    rep (i, q) {
        ll t, k;
        cin >> t >> k;
        int fidx = k / pow(2, t);
        int fchar = cmp[s[fidx]];
        char fchar = s[fidx];


        ll ue = log(k-1)/log(2) + 1;
    }
    return 0;
}
