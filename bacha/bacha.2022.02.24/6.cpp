#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans = "Yes"; 
    for (int i = 0; i < (int)s.length(); i++) {
        char c = s[i];
        if (i % 2 == 0) {
            if ('A' <= c && c <= 'Z') ans = "No";
        } else {
            if ('a' <= c && c <= 'z') ans = "No";
        }
    }
    cout << ans << endl;
    return 0;
}
