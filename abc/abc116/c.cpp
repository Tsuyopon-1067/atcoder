#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int ans = 0;
vector<int> h;
void mizu (int l, int r) {
    if (l >= r) return;

    int m = INF;
    reps (i, l, r) chmin(m, h[i]);
    ans += m;
    reps (i, l, r) h[i] -= m;

    vector<int> zero(1, -1);
    reps (i, l, r) {
        if (h[i] == 0) zero.push_back(i);
    }
    zero.push_back(r);
    int n = zero.size();
    reps (i, 1, n) {
    mizu(zero[i-1]+1, zero[i]);
    }
}
int main() {
    int n;
    scanf("%d", &n);
    h.resize(n);
    rep (i, n) scanf("%d", &h[i]);

    mizu(0, n);
    printf("%d\n", ans);

    return 0;
}
