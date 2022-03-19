#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;
    sort(s.begin(), s.end());
    rep (i, k-1) next_permutation(s.begin(), s.end());
    cout << s << endl;
    return 0;
}
