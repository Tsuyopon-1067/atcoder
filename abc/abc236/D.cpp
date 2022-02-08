#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
vector<bool> seen;
void dfs(const Graph &G, int v) {
    seen[v] = true; 

    for (auto next_v : G[v]) { 
        if (seen[next_v]) continue; 
        dfs(G, next_v); 
    }
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> a;
    rep (i, 2*n-1) {
        vector<int> t;
        rep (j, 2*n-i-1) {
            int ti;
            cin >> ti;
            t.push_back(ti);
        }
        a.push_back(t);
    }


    return 0;
}
