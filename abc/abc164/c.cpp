#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    set<string>st;
    rep (i, n) {
        string s;
        cin >> s;
        st.insert(s);
    }
    cout << st.size() << endl;
    return 0;
}
