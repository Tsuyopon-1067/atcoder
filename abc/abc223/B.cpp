#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    string sa = s;
    string si = s;
    string st = s;
    rep(i, n){
        string temp = st;
        rep(j, n-1){
            st[j+1] = temp[j];
        }
        st[0] = temp[n-1];

        if(sa < st) sa = st;
        else if(si > st) si = st;
    }

    cout << si << endl;
    cout << sa << endl;

    return 0;
}
