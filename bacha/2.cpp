#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define reps(s, i, n) for (int i = (s); i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k;
    cin >> k;
    string a, b;
    cin >> a >> b;
    long long aa = 0;
    long long bb = 0;

    rep (i, a.size()) {
        long long d = a[a.size()-1-i] - '0';
        aa += d * pow(k, i);
    }
    rep (i, b.size()) {
        long long d = b[b.size()-1-i]-'0';
        bb += d * pow(k, i);
    }
    cout << aa*bb << endl;
    return 0;
}
