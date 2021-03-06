#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
template <typename T> bool chmax(T &a, const T& b) { if (a < b) { a = b; return true; } return false; }
template <typename T> long long count_digit(T n) { long long res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;
int main() {
    long long n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    rep (i, n) {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(a.begin(), a.end());
    map<ll, vector<ll>>mp;
    rep (i, n) mp[a[i]].push_back(i);

    string ans = "Yes";
    rep (i, n) {
        bool flag = true;
        for (auto x : mp[b[i]]) {
            if (abs(i-x) % k == 0) flag = false;
        }
        if (flag) {
            ans = "No";
            break;
        }
    }
    if (k == 1) ans = "Yes";
    cout << ans << endl;

    return 0;
}
