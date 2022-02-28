#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a(10);
    for(int i = 0; i < 10; ++i) {
        cin >> a[i];
    }
    int x, y, z;
    x = a[0];
    y = a[x];
    z = a[y];
    cout << z << endl;
    return 0;
}
