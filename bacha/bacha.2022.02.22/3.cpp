#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int ans = 0;
    while (true) {
        if (ans * a >= b) {
            cout << ans << endl;
            break;
        }
        ++ans;
    }
    return 0;
}
