#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int ans = (y + 9 - x) / 10;
    if (ans < 0) ans = 0;
    cout << ans << endl;
    return 0;
}
