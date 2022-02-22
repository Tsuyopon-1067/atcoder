#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long x, m;
    cin >> x;
    
    m = 100;
    unsigned long long ans = 0;
    while (true) {
        ++ans;
        if (x <= m+m/100) {
            cout << ans << endl;
            break;
        }
        m = (unsigned long long)(m+m/100);
    }
    return 0;
}
