#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> int count_digit(T n) { int res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n+1);
    vector<int> c(n+m+1);
    for (auto &x : a) cin >> x;
    for (auto &x : c) cin >> x;

    vector<int> b;
    rep (i, m+1) {
        int tc = c[m+n-i];
        int ta = a[n];
        int t = tc / ta;
        b.push_back(t);
        rep (j, n+1) {
            c[m+n-i-j] -= t*a[n-j];
        }
    }
    rep (i, m+1) printf("%d ", b[m-i]);
    cout << endl;
    return 0;
}
