#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long sum = 2*n*(n+1);
    rep (i, 4*n-1) {
        int a;
        cin >> a;
        sum -= a;
    }
    cout << sum << endl;
    return 0;
}
