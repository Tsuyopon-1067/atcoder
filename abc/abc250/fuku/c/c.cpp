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
    long long n, q;
    cin >> n >> q;
    
    vector<ll> x(q);
    for (auto &xx : x) cin >> xx;

    vector<ll> numToIdx(n+1);
    vector<ll> idxToNum(n+1);
    rep (i, n+1) {
        numToIdx[i] = i;
        idxToNum[i] = i;
    }
    for (auto xx : x) {
        ll idx = numToIdx[xx];
        if (idx < n) {
            swap(idxToNum[idx], idxToNum[idx+1]);
            swap(numToIdx[idxToNum[idx]], numToIdx[idxToNum[idx+1]]);
        } else {
            swap(idxToNum[idx], idxToNum[idx-1]);
            swap(numToIdx[idxToNum[idx]], numToIdx[idxToNum[idx-1]]);
        }
    }
    reps (i,1, n+1) printf("%lld ", idxToNum[i]);
    cout << endl;
    return 0;
}
