#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long w;
    cin >> w;
    cout << 297 << endl;
    reps (i, 1, 100) printf("%lld ", i);
    reps (i, 1, 100) printf("%lld00 ", i);
    reps (i, 1, 100) printf("%lld0000 ", i);
    cout << endl;
    return 0;
}
