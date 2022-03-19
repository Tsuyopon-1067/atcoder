#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define INF 2000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> s(n);
    for(int i = 0; i < n; ++i) cin >> s[i];
    vector<int> t(n);
    for(int i = 0; i < n; ++i) cin >> t[i];

    vector<int> sunuke(n+1, INF);
    rep (i, 2*n) {
        int idx = i % n;
        int mae = idx-1;
        if (mae < 0) mae = n-1;
        sunuke[idx] = min(sunuke[mae] + s[mae], t[idx]);
    }
    rep (i, n) cout << sunuke[i] << endl;
    return 0;
}
