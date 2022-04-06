#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int digit(ll n) {
    int res = 0;
    while(n > 0){
        n /= 10;
        ++res;
    }
    return res;
}
int main() {
    ll n;
    cin >> n;
    int d = digit(n);
    int d2 = d/2;
    ll ans = 0;
    reps (i, 1, d2) ans += 9 * (ll)pow(10, i-1);
    reps (i, 1, d2) cout << pow(10, i-1) << endl;

    if (d2 % 2 == 0) ans += min((n % (ll)pow(10, d2)), n / (ll)pow(10, d2));

    cout << n%(ll)pow(10, d2) << endl; 
    return 0;
}
