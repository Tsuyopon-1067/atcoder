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
    long long n;
    cin >> n;
    ll ans = INFL;
    ll x = sqrt(n);
    ll y = n / x;
    
    ll xt = x+0;
    ll yt = y+0;
    chmin(ans, abs(n-(xt)*(yt)) + abs(xt-yt));
    xt = x+1;
    yt = y+0;
    chmin(ans, abs(n-(xt)*(yt)) + abs(xt-yt));
    xt = x+0;
    yt = y+1;
    chmin(ans, abs(n-(xt)*(yt)) + abs(xt-yt));
    xt = x+1;
    yt = y+1;
    chmin(ans, abs(n-(xt)*(yt)) + abs(xt-yt));

    cout << ans << endl;
    return 0;
}
