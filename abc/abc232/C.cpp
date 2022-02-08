#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> ta(n, vector<int>(m));
    vector<vector<int>> ao(n, vector<int>(m));
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        ta[a-1][i]++;
        ta[b-1][i]++;
    }
    rep(i, m) {
        int c, d;
        cin >> c >> d;
        ao[c-1][i]++;
        ao[d-1][i]++;
    }

    rep(i, m) {
        reps(i, j, m) {
            if (ta[j] == ao[i]) {
                vector<int> temp = ta[j];
                ta[j] = ta[i];
                ta[i] = temp;
            }
        }
    }
    string ans = "Yes";
    rep(i, m) {
        rep(j, n)
        printf("%d ", ta[i][j]);
        cout << endl;
    }
    rep(i, m) {
        rep(j, n) printf("%d ", ao[i][j]);
        cout << endl;
    }
    cout << ans << endl;

    return 0;
}
