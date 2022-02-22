#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int h, w, n;
    cin >> h >> w >> n;
    vector<int> a(n);
    vector<int> b(n);
    vector<int> aa(n);
    vector<int> bb(n);
    rep (i, n) {
        cin >> a[i] >> b[i];
        aa[i] = a[i];
        bb[i] = b[i];
    }

    sort(aa.begin(), aa.end());
    aa.erase(unique(aa.begin(), aa.end()), aa.end());
    map<int, int> hidx;
    rep (i, aa.size()) hidx[aa[i]] = i+1;

    sort(bb.begin(), bb.end());
    bb.erase(unique(bb.begin(), bb.end()), bb.end());
    map<int, int> widx;
    rep (i, bb.size()) widx[bb[i]] = i+1;

    rep (i, n) printf("%d %d\n", hidx[a[i]], widx[b[i]]);
    
    return 0;
}
