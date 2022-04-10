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

struct dq {
    deque<ll> p; 
    deque<ll> m;
    void push(ll n) {
        if (n >= 0) {
            p.push_back(n);
            sort(p.begin(), p.end());
        } else {
            m.push_back(n);
            sort(m.begin(), m.end());
        }
    }
    ll pfr() { return p.front(); }
    ll mfr() { return m.front(); }
    void ppfr() { p.pop_front(); }
    void mpfr() { m.pop_front(); }
    ll pbk() { return p.back(); }
    ll mbk() { return m.back(); }
    void ppbk() { p.pop_back(); }
    void mpbk() { m.pop_back(); }
    bool canp() { return (p.size() > 0 ? true : false); }
    bool canm() { return (m.size() > 0 ? true : false); }
};
    return 0;
}
