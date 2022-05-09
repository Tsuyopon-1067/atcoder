#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> b(n);
    for (auto &x : b) cin >> x;

    vector<int> ans;
    rep (i, n) {
        int size = (int)b.size();
        rrep (j, size) {
            if (b[j] == j+1) {
                ans.push_back(j+1);
                b.erase(b.begin() + j);
                break;
            }
        }
    }

    if (b.size() == 0) {
        rrep (i, n) cout << ans[i] << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}
