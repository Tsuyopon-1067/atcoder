#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x;
    cin >> x;
    int mod = x%10;
    if (mod < 0) mod += 10;
    x = (x - mod)/10;

    cout << x << endl;
    return 0;
}
