#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;
    list<int> ans(1);
    auto itr = ans.begin();
    rep (i, n) {
        if (s[i] == 'L') itr = ans.insert(itr, i+1);
        else itr = ans.insert(++itr, i+1);
    }
    for(auto x : ans) printf("%d ", x);
    cout << endl;
    return 0;
}
