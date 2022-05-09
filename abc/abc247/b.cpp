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
    long long n;
    cin >> n;
    vector<string> s(n);
    vector<string> t(n);
    map<string, ll>mp;
    rep (i, n) {
        cin >> s[i] >> t[i];
        ++mp[s[i]];
        if (s[i] != t[i]) ++mp[t[i]];
    }

    string ans = "Yes";
    rep (i, n) {
        if (mp[s[i]] <= 1) --mp[s[i]];
        else if (mp[t[i]] <= 1) --mp[t[i]];
        else {
            ans = "No"; 
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
