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
    vector<int> x(3);
    vector<int> y(3);
    cin >> x[0] >> y[0];
    cin >> x[1] >> y[1];
    cin >> x[2] >> y[2];

    sort(x.begin(), x.end());
    sort(y.begin(), y.end());

    int ansx, ansy;
    if (x[0] == x[1]) ansx = x[2];
    else ansx = x[0];
    if (y[0] == y[1]) ansy = y[2];
    else ansy = y[0];

    printf("%d %d\n", ansx, ansy);
    return 0;
}
