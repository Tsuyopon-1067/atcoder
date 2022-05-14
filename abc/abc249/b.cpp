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
    string s;
    cin >> s;
    bool big = false;
    bool sml = false;
    set<char>st;
    for (auto x : s) {
        if ('A' <= x && x <= 'Z') big = true;
        if ('a' <= x && x <= 'z') sml = true;
        st.insert(x);
    }
    if (big && sml && st.size() == s.length()) cout << "Yes" << endl;
    else cout << "No" << endl;
    return 0;
}
