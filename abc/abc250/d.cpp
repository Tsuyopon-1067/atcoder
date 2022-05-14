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

vector<ll> primes;
void getPrime() {
    vector<bool> isPrime(1000000, true);

    for (ll p = 2; p*p < 1000000; ++p) {
        if (!isPrime[p]) continue;
        for (ll q = p + p; q < 1000000; q += p) isPrime[q] = false;
    }

    for (ll p = 2; p < 1000000; ++p) {
        if (isPrime[p]) primes.push_back(p);
    }
}

int main() {
    getPrime();

    long long n;
    cin >> n;

    ll ans = 0;
    ll m = (ll)primes.size();
    rep (i, m) {
        ll p = primes[i];
        if (p*p*p*p > n) break;
        else if (i >= m) continue;

        reps (qi, i+1, m) {
            ll q = primes[qi];
            if (p*q*q*q <= n) ++ans;
            else break;
        }
    }
    cout << ans << endl;
    return 0;
}
