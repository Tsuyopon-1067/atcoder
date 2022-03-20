#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string t;
    cin >> t;
    int r = 0;
    int ansx = 0;
    int ansy = 0;
    rep (i, n) {
        if (t[i] == 'S') {
            switch (r) {
                case 0:
                    ++ansx;         
                    break;
                case 1:
                    --ansy;         
                    break;
                case 2:
                    --ansx;         
                    break;
                case 3:
                    ++ansy;         
                    break;
            }
        } else {
            r = (r + 1) % 4;
        }
    }
    cout << ansx << " " << ansy << endl;
    return 0;
}
