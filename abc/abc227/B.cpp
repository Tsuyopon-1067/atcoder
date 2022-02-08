#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    int ans = n;
    rep(i, n){
        int am = s[i]/3 + 1;
        int bm = am;
        reps(1, a, am)reps(1, b, bm){
            if(4*a*b+3*a+3*b == s[i]){
                ans--;
                a = am;
                b = bm;
                break;
            }
        }
    }
    cout << ans << endl;

    return 0;
}
