#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    rep (i, n) cin >> p[i];

    priority_queue<int, vector<int>, greater<int>> initList;
    rep (i, k) initList.push(p[i]);

    cout << initList.top() << endl;
    reps (k, i, n) {
        if (initList.top() < p[i]) {
            initList.pop();
            initList.push(p[i]);
        }
        cout << initList.top() << endl;
    }
    return 0;
}
