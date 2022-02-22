#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    vector<int> maxList;
    rep (i, n) {
        cin >> p[i];
        if (i < k) maxList.push_back(p[i]);
    }
    sort(maxList.begin(), maxList.end(), greater<int>());

    cout << maxList[k-1] << endl;
    reps (k, i, n) {
        if (maxList[k-1] < p[i]) maxList.push_back(p[i]);
        sort(maxList.begin(), maxList.end(), greater<int>());
        cout << maxList[k-1] << endl;
    }
    return 0;
}
