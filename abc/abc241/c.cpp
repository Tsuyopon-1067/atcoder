#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep (i, n) cin >> s[i];

    string ans = "No"; 
    rep (i, n) {
        rep (j, n-5) {
            int count = 0;
            rep (k, 6) {
                if (s[i][j+k] != '#') {
                    ++count;
                }
            }
            if (count <= 2) ans = "Yes"; 
        }
    }
    rep (i, n) {
        rep (j, n-5) {
            int count = 0;
            rep (k, 6) {
                if (s[j+k][i] != '#') {
                    ++count;
                }
            }
            if (count <= 2) ans = "Yes"; 
        }
    }
    rep (i, n-5) {
        rep (j, n-5) {
            int count = 0;
            rep (k, 6) {
                if (s[i+k][j+k] != '#') {
                    ++count;
                }
            }
            if (count <= 2) ans = "Yes"; 
        }
    }
    rep (i, n-5) {
        rep (j, n-5) {
            int count = 0;
            rep (k, 6) {
                if (s[i+k][n-1-(i+k)] != '#') {
                    ++count;
                }
            }
            if (count <= 2) ans = "Yes"; 
        }
    }
    rep (i, n-5) {
        rep (j, n-5) {
            int count = 0;
            rep (k, 6) {
                if (s[n-1-(i+k)][j+k] != '#') {
                    ++count;
                }
            }
            if (count <= 2) ans = "Yes"; 
        }
    }
    rep (i, n-5) {
        rep (j, n-5) {
            int count = 0;
            rep (k, 6) {
                if (s[n-1-(i+k)][n-1-(j+k)] != '#') {
                    ++count;
                }
            }
            if (count <= 2) ans = "Yes"; 
        }
    }
    cout << ans << endl;
    return 0;
}
