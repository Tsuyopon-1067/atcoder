#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define reps(s, i, n) for (int i = (s); i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, a;
    cin >> n >> k >> a;
    cout << (a+k-2)%n + 1 << endl;
    return 0;
}
