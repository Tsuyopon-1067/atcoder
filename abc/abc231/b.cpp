#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<string> s(n);
    for(int i = 0; i < n; i++) cin >> s[i];

    int kMax = 0;
    string ans;
    rep(i, n) {
        string temp = s[i];
        int k = 0;
        rep(j, n) {
            if (temp == s[j]) k++;
        }
        if (k > kMax) {
            ans = temp;
            kMax = k;
        }
    }
    
    cout << ans << endl;

    return 0;
}
