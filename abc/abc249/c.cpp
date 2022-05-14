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
    long long n, k, ans;
    cin >> n >> k;
    vector<string> s(n);
    for (auto &x : s) cin >> x;

    ans = 0;
    for (int bit = 0; bit < (1<<n); ++bit) {
        map<char, set<int>>mp;
        for (int i = 0; i < n; ++i) {
            if (bit & (1<<i)) {
                for (auto x : s[i]) {
                    mp[x].insert(i);
                }
            }
        }
        ll count = 0;
        for (int i = 'a'; i <= 'z'; ++i) {
            if ((ll)(mp[i].size()) == k) ++count;
        }
        chmax(ans, count);
    }
    cout << ans << endl;
    return 0;
}
