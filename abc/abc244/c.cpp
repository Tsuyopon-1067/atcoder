#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<bool> flag(2*n+2, true);
    reps(i, 0, 2*n+2) {
        if (i % 2 == 0) {
            reps(j, 1, 2*n+2) {
                if (flag[j]) {
                    cout << j << endl;
                    flag[j] = false;
                    break;
                }
            }
        } else {
            int aoki;
            cin >> aoki;
            flag[aoki] = false;
        }
    }
    return 0;
}
