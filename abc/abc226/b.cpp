#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a(n);

    set<vector<int>> st;
    rep(i, n){
        int l;
        cin >> l;
        rep(j, l) {
            int t;
            cin >> t;
            a[i].push_back(t);
        }
        st.insert(a[i]);
    }

    cout << st.size() << endl;

    return 0;
}

