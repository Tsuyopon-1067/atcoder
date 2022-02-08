#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a = s[0] - '0';
    int b = s[2] - '0';
    cout << a*b << endl;
    return 0;
}
