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

vector<int> prime_vec(int n) {
    vector<bool> lst(n+1, true);
    lst[0] = false;
    lst[1] = false;
    for (int i = 2; i <= n; ++i) {
        if (lst[i] == false) continue;
        int jn = n / i;
        for (int j = 2; j <= jn; j++) lst[i*j] = false;
    }
    vector<int> res;
    for (int i = 2; i <= n; ++i) {
        if (lst[i]) res.push_back(i);
    }
    return res;
}

int main() {
    long long n;
    cin >> n;
    vector<int> lst = prime_vec(1000000);
    return 0;
}
