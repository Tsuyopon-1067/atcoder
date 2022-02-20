#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n;
    int ren = -1;
    int count = 0;
    vector<int> a(n);
    rep (i, n) {
        if (i < 0) i = 0;
        cin >> a[i];
        count++;

        int mae = i-1;
        if (mae < 0) {
            cout << count << endl;
            continue;
        }

        if (a[mae] == a[i]) {
            ren++;
            k = a[i];
            if (ren == k) {
                rep (j, k) a.erase(a.begin() + i - j);
                count -= k;
                n -= k;
                i -= k;
                ren = 1;
            }
        }
        else ren = 1;
        
        cout << count << endl;
    }
    return 0;
}
