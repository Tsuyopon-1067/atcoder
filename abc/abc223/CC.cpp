#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<vector<double>> ab(n, vector<double>(2));
    for(int i = 0; i < n; i++) cin >> ab[i][0] >> ab[i][1];

    vector<double> dpl(n);
    vector<double> dpr(n);

    dpl[0] = ab[0][0] / ab[0][1];
    dpr[n-1] = 0;
    reps(1, i, n){
        dpl[i] = ab[i][0] / ab[i][1] + dpl[i-1];
        dpr[n-i-1] = ab[n-i][0] / ab[n-i][1] + dpr[n-i];
    }

    int meet = 0;
    rep(i, n){
        if(dpl[i] >= dpr[i]){
            meet = i;
            break;
        }
    }
    rep(i, n){
        printf("dpl[%d] = %lf  ", i, dpl[i]);
        printf("dpr[%d] = %lf\n", i, dpr[i]);
    }

    double tl = dpl[meet-1];
    double tr = dpr[meet];
    double t = (tl - tr > 0 ? tl - tr : tr - tl);
    double ofset = ab[meet][0] - t*ab[meet][1];

    double ans = 0;
    rep(i, meet) ans += ab[i][0];
    printf("ans0 = %lf meet = %d\n", ans, meet);
    ans += ofset/2;
    if(tl < tr) ans += t*ab[meet][1];
    //else ans -= t*ab[meet][1];
    printf("tl = %lf tr = %lf t = %lf ofset = %lf\n", tl, tr, t, ofset);
    printf("ab[m][0] = %lf, ab[m][1] = %lf\n", ab[meet][0], ab[meet][1]);

    cout << ans << endl;
    
    return 0;
}
