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
    string x;
    cin >> x;
    long long n;
    cin >> n;
    map<char, char>mp1;
    map<char, char>mp2;
    rep (i, 26) mp1[x[i]] = 'a'+i;
    rep (i, 26) mp2['a'+i] = x[i];

    vector<string> s(n);
    rep (i, n) {
        cin >> s[i];
        for(auto &y : s[i]) y = mp1[y];
    }
    sort(s.begin(), s.end());
    rep (i, n) {
        for(auto &y : s[i]) y = mp2[y];
    }

    for(auto x : s) cout << x << endl;
    return 0;
}
