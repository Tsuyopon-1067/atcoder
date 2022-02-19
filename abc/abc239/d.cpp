#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    vector<bool> p(201);
    p[1] = false;
    for (int i = 2; i <= 200; i++) {
        bool flag = true;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) flag = false;
        }
        p[i] = (flag ? true : false);
    }

    string ans = "Aoki";
    for (int i = a; i <= b; i++) {
        bool canPrime = false;
        for (int j = c; j <= d; j++) {
            if (p[i+j]) {
                canPrime = true;
            }
        }
        if (!canPrime) ans = "Takahashi";
    }
    cout << ans << endl;
    return 0;
}
