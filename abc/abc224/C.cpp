#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    rep(i, n) cin >> x[i] >> y[i];

    int ans = 0;
    rep(i, n)reps(i+1, j, n)reps(j+1, k, n){
        int a1 = x[j]-x[i];
        int a2 = y[j]-y[i];
        int b1 = x[k]-x[i];
        int b2 = y[k]-y[i];
        if(a1*b2-a2*b1 != 0) ans++;
    }

    cout << ans << endl;

    return 0;
}
