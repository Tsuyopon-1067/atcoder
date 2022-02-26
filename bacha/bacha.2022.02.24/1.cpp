#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    if (s.length() == 2) cout << s << endl;
    else {
        for(int i = 0; i < 3; i++) {
            cout << s[2-i];
        }
        cout << endl;
    }
    return 0;
}
