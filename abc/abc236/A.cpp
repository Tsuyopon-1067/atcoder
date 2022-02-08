#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int a, b;
    cin >> a >> b;
    swap(s[a-1], s[b-1]);
    cout << s << endl;
    return 0;
}
