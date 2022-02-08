#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<bool> ab(n, false);

    rep(i, n+1){
        ab[x-1] = true;
        x = a[x-1];
    }

    int ans = 0;
    rep(i, n){
        if(ab[i]) ans++;
    }
    cout << ans << endl;
    return 0;
}
