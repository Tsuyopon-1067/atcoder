#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> p(n, 0);//sum
    vector<int> s(1201, 0);//bunpu
    rep(i, n){
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        p[i] = p1 + p2 + p3;
        s[p[i]]++;
    }

    for(int i = 1199; i >= 0; i--){
        s[i] = s[i+1] + s[i];
    }

    rep(i, n){
        p[i] += 300;
        if(p[i] == 1200) cout << "Yes" << endl;
        else if(s[p[i]+1] < k) cout << "Yes" << endl;
        else cout << "No" << endl;
        p[i] -= 300;
    }

    return 0;
}
