#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    string s, s1, s2;
    cin >> n;
    cin >> s;
    cin >> q;
    bool is_reverse = false;
    for(int i = 0; i < q; i++) {
        int t, a, b;
        cin >> t >> a >> b;
        if (t == 2) is_reverse = !is_reverse;
        else {
            int aa = is_reverse ? a : a+n;
            int bb = is_reverse ? b : b+n;
            swap(s[aa-1], s[bb-1]);
            cout << s[aa-1] << s[bb-1] << endl;
        }

if (is_reverse) {
    s1 = s.substr(0, n);
    s2 = s.substr(n, 2*n);
    cout << s2 << s1;
}
else cout << s;
cout << endl;

    }

    if (is_reverse) {
        s1 = s.substr(0, n);
        s2 = s.substr(n, 2*n);
        cout << s2 << s1;
    }
    else cout << s;
    cout << endl;
    return 0;
}
