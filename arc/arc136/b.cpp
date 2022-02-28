#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);
    map<int, int> ca;
    map<int, int> cb;
    rep (i, n) {
        cin >> a[i];
        ca[a[i]]++;
    }
    rep (i, n) {
        cin >> b[i];
        cb[b[i]]++;
    }
    bool ce = true;
    rep (i, 5001) {
        if (ca[i] != cb[i]) ce = false;
    }
    if (!ce) {
        cout << "No" << endl;
        return 0;
    }

    vector<vector<int>> cida(5001);
    vector<vector<int>> cidb(5001);
    rep (i, n) {
        cida[a[i]].push_back(i);
        cidb[b[i]].push_back(i);
    }

    long long csum = 0;
    reps (1, i, 5001) {
        if (cida[i].size() != 0) {
            for (auto x : cida[i]) csum += x;
        }
        if (cidb[i].size() != 0) {
            for (auto x : cidb[i]) csum -= x;
        }
    }

    string ans = csum % 2 == 0 ? "Yes" : "No";
    reps (1, i, 5001) {
        if (cida[i].size() >= 2) ans = "Yes";
    }
    cout << ans << endl;
    return 0;
}
