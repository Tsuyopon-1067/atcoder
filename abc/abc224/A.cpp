#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    if(s[n-2] == 'e' && s[n-1] == 'r') cout << "er" << endl;
    else if(s[n-3] == 'i' && s[n-2] == 's' && s[n-1] == 't') cout << "ist" << endl;
    return 0;
}
