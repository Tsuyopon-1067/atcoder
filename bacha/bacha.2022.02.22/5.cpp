#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long h, ans;
    cin >> h;
    ans = 0;
    long long i = 1;
    while (h > 0) {
        h /= 2;
        ans += i;
        i*= 2;
    }
    cout << ans << endl;
    return 0;
}
