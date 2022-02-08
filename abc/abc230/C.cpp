#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long p, q, r, s;
    cin >> p >> q >> r >> s;

    long long m1 = max(1-a, 1-b);
    long long M1 = min(n-a, n-b);
    long long m2 = max(1-a, b-n);
    long long M2 = min(n-a, b-1);
    rep(i, q-p+1) {
        rep(j, s-r+1) {
            long long x = p + i;
            long long y = r + j;
            char putchar = '.';
            long long k = x-a;
            if (x-a == y-b) {
                if (m1 <= k && k <= M1) putchar = '#';
            } else if (x-a == b-y && m2 <= k && k <= M2) putchar = '#';
            
            cout << putchar;
        }
        cout << '\n';
    }

    return 0;
}
