#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n-1);
    vector<int> b(n-1);
    rep(i, n-1) cin >> a[i] >> b[i];

    vector<int> c(n+1, 0);

    rep(i, n-1){
        c[a[i]]++;
        c[b[i]]++;
    }

    reps(1, i, n+1){
        if(c[i] == 0){
            cout << "No" << endl;
            return 0;
        }
    }

    reps(1, i, n+1){
        if(c[i] == n-1){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
