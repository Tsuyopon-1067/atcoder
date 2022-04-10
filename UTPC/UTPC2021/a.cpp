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

int f(vector<int> t) {
    int res = 4;
    return res;
}
int main() {
    int n;
    cin >> n;
    string st;
    cin >> st;
    map<char, int>mp;
    mp['U'] = 1;
    mp['T'] = 2;
    mp['P'] = 3;
    mp['C'] = 4;
    vector<int> s(n);
    rep (i, n) s[i] = mp[s[i]];

    int ans = INF;
    rep (i, n-4) {
        vector<int> t(4);
        t[0] = s[i];
        t[1] = s[i+1];
        t[2] = s[i+2];
        t[3] = s[i+3];
        chmin(ans, f(t));
    }
    return 0;
}
