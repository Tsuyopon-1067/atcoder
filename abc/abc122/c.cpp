#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q; 
    string s;
    cin >> s;

    vector<int> p(n);
    int k = 0;
    rep (i, n-1) {
        if (s[i] == 'A' && s[i+1] == 'C') {
            ++k;
        }
        p[i+1] = k;
    }
    
    rep (i, q) {
        int l, r;
        cin >> l >> r;
        cout << p[--r] - p[--l] << endl;
    }
    return 0;
}
