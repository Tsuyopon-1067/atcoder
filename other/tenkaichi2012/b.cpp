#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    bool flag = false;
    for (auto c : s) {
        if (c == ' ') {
            if (flag) continue;
            cout << ',';
            flag = true;
        }
        else {
            cout << c;
            flag = false;
        }
    }
    cout << endl;
    return 0;
}
