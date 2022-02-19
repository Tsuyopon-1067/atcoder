#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int d[] = {1, 2, -1, -2};

    bool flag = false;
    for (auto dx : d) for (auto dy : d) {
        int x = x1 + dx;
        int y = y1 + dy;
        if (pow(dx,2)+pow(dy,2) == 5 && pow(x2-x,2)+pow(y2-y,2) == 5) {
            flag = true;
        }
    }
    cout << (flag ? "Yes" : "No") << endl;
    return 0;
}
