#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i += 2) {
        int k = 0;
        reps (j, 1, i+1) {
            if (i%j ==0) ++k;
        }
        if (k == 8) ++ans;
    }
    cout << ans << endl;
    return 0;
}
