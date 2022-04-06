#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 

    double ans = 0;
    reps (1, i, n+1) {
        int bin = 1;
        while (i*bin < k) bin *= 2;
        ans += 1.0/bin;
    }
    cout << setprecision(11) << ans/n << endl;
    return 0;
}
