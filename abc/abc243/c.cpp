#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep (i, n) cin >> x[i] >> y[i];
    string s;
    cin >> s;

    map<int, int> lList;
    map<int, int> rList;
    rep (i, n) rList[y[i]] = 1000000000;
    rep (i, n) {
        if (s[i] == 'L') lList[y[i]] = max(lList[y[i]], x[i]);
        else rList[y[i]] = min(rList[y[i]], x[i]);
    }
    
    unique(y.begin(), y.end());
    rep (i, n) {
        if (rList[y[i]] < lList[y[i]]) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
