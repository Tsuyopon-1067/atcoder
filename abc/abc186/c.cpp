#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

bool contains10(int n) {
    int inc = 1;
    int nn = n;
    while (nn > 0) {
        if (nn%10 == 7) {
            return true;
        }
        inc *= 10;
        nn /= 10;
    }
    return false;
}
bool contains8(int n) {
    int inc = 1;
    int nn = n;
    while (nn > 0) {
        if (nn%8 == 7) {
            return true;
        }
        inc *= 8;
        nn /= 8;
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    int ans = 0;
    reps (i, 1, n+1) {
        if (contains10(i) || contains8(i)) continue;
        ++ans;
    }
    cout << ans << endl;
    return 0;
}
