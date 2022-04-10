#define INF 2000000000
template <typename T> bool chmin(T &a, const T& b) { if (a > b) { a = b; return true; } return false; }
#include <bits/stdc++.h>
using namespace std;

void show(int x, int y) { printf("x:%d y:%d\n", x, y); }
int main() {
    int x, y;
    cin >> x >> y;

    int ans = INF;
    if (x <= y) chmin(ans, y - x);
    if (-x <= y) chmin(ans, 1+y+x);
    if (x <= -y) chmin(ans, -x-y+1);
    if (-x <= -y) chmin(ans, 1+x-y+1);
    
    cout << ans << endl;
    return 0;
}
