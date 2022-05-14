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
    int a, b, c, d, e, f, x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int tt1 = x / (a+c);
    int tt2 = x % (a+c);
    int ta1 = x / (d+f);
    int ta2 = x % (d+f);

    int xt = a*tt1*b;
    int xa = d*ta1*e;
    
    xt += min(a, tt2) * b;
    xa += min(d, ta2) * e;
    if (xt > xa) cout << "Takahashi" << endl;
    else if (xt < xa) cout << "Aoki" << endl;
    else cout << "Draw" << endl;
    return 0;
}
