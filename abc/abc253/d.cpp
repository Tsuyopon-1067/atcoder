#define rep(i, n) for (long long i = 0; i < (long long)(n); ++i)
#define reps(i, s, n) for (long long i = (long long)(s); i < (long long)(n); ++i)
#define rrep(i, n) for (long long i = (long long)(n-1); i >= 0; --i)
#define MOD 1000000007
#define INF 2000000000
#define INFL 1000000000000000000
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;
    ll ab = a/__gcd(a,b)*b;

    ll na = n / a;
    ll nb = n / b;
    ll nab = n / (ab);

    ll sa = na*(na+1) * a / 2;
    ll sb = nb*(nb+1) * b / 2;
    ll sab = nab*(nab+1) * ab / 2;
    ll sn = n*(n+1) / 2;

    cout << sn - (sa + sb - sab) << endl;
    return 0;
}
