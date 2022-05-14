#define rep(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define reps(i, s, n) for (ll i = (s); i < (ll)(n); ++i)
#define rrep(i, n) for (ll i = (ll)(n-1); i >= 0; --i)
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
    long long n, a, b;
    cin >> n >> a >> b;

    char mas = '.';
    rep (i, n) {
        string line = "";
        rep (i, n) {
            rep (j, b) line += mas;
            if (mas == '.') mas = '#';
            else mas = '.';
        }
        rep (i, a) cout << line << endl;
        if (i % 2 == 0) mas = '#';
        else mas = '.';
    }
    return 0;
}
