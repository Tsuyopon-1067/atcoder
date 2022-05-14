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
    long long n;
    cin >> n;
    vector<string> s(n);
    vector<ll> t(n);
    rep (i, n) cin >> s[i] >> t[i];

    set<string>st;
    rep (i, n) {
        if (st.find(s[i]) != st.end()) {
            t[i] = -1;
        } else {
            st.insert(s[i]);
        }
    }
    ll maxp = -1;
    rep (i, n) {
        chmax(maxp, t[i]);
    }
    
    rep (i, n) {
        if (t[i] == maxp) {
            cout << i+1 << endl;
            return 0;
        }
    }
    return 0;
}
