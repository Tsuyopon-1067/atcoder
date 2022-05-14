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

vector<long long> llprime(long long n) {
    vector<long long> res;
    vector<bool> isPrime(n+1, true);
    for (long long i = 2; i*i <= n; ++i) {
        if (!isPrime[i]) continue;
        for (long long j = i*2; j <= n; j += i) {
            isPrime[j] = false;
        }
    }
    for (long long i = 2; i <= n; ++i) {
        if (isPrime[i]) res.push_back(i);
    }
    return res;
}

int main() {
    long long n;
    cin >> n;
    vector<ll> primes = llprime(1000000);
    ll ans = 0;
    ll m = (ll)primes.size();

    rep (i, m) {
        ll p = primes[i];
        if (p*p*p*p > n) break;
        reps (j, i+1, m) {
            ll q = primes[j];
            if (p * q*q*q <= n) ++ans;
            else break;
            
            
        }
    }
    cout << ans << endl;
    return 0;
}
