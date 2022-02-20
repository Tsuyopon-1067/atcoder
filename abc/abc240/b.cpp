#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<int>s;
    rep (i, n) {
        int a;
        cin >> a;
        s.insert(a);
    }
    cout << s.size() << endl;
    return 0;
}
