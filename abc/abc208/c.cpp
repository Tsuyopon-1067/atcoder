#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    ll k;
    cin >> n >> k; 
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    vector<int> ca = a;

    map<int, int>mp;    
    sort(ca.begin(), ca.end());
    rep (i, n) mp[ca[i]] = i;
    
    ll snack = k / n;
    int idx = k % n;

    rep (i, n) {
        if (mp[a[i]] < idx) cout << snack+1 << endl;
        else cout << snack << endl;
    }
    return 0;
}
