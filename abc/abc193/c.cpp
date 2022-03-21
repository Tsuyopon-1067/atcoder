typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    ll n;
    cin >> n;
    set<ll>st;
    for (ll p = 2; p*p <= n; ++p) {
        ll k = 2;
        while ((ll)pow(p,k) <= n) {
            st.insert((ll)pow(p, k));
            ++k;
        }
    }
    cout << n-(ll)st.size() << endl;
    return 0;
}
