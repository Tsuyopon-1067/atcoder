#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<int>> b(n, vector<int>(m));
    rep(i, n)rep(j, m) cin >> b[i][j];

    int md = b[0][0] % 7;
    if(md == 0) md = 7;
    if(m > 8-md){
        cout << "No" << endl;
        return 0;
    }
    rep(i, n){
        rep(j, m-1){
            if(b[i][j+1] - b[i][j] != 1){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    rep(j, m){
        rep(i, n-1){
            if(b[i+1][j] - b[i][j] != 7){
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;

    return 0;
}
