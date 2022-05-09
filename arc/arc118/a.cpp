typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    ll t, n;
    cin >> t >> n;
    ll ans = (100*n-0.9)/t+n;
    cout << ans << endl;
    return 0;
}
