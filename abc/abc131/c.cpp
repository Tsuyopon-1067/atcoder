#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll gcd (ll a, ll b) {
    if (a % b == 0) return b;
    else return gcd(b, a % b);
}
int main() {
    ll a, b, c, d, ansc, ansd, anscd;
    cin >> a >> b >> c >> d;
    ansc = (b/c) - ((a-1)/c);
    ansd = (b/d) - ((a-1)/d);
    ll cd = c * d / gcd(c, d);
    anscd = b/(cd) - (a-1)/(cd);
    cout << (b-a+1)-(ansc + ansd - anscd) << endl;
    return 0;
}
