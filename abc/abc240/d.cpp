#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<pair<int,int>> ball;
    rep (i, n) {
        int a;
        cin >> a;
        if (ball.size() == 0) {
            ball.push({a, 1});
            cout << ball.size() << endl;
            continue;
        }
        pair<int, int> top = ball.top();
        pair<int, int> add = {a, 1};
        if (top.first == a) add.second = top.second + 1;
        ball.push(add);
        if (add.second == a) {
            rep (i, a) ball.pop();
        }
        cout << ball.size() << endl;
    }
    return 0;
}
