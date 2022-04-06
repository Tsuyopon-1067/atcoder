#define reps(i, s, n) for (int i = (s); i < (int)(n); ++i)
template <typename T> int count_digit(T n) { int res = 0; while (n > 0) { ++res; n /= 10; } return res; }
typedef long long ll;
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int d = count_digit(n) / 2;
    int ans = 0;
    while (stoll(to_string(ans) + to_string(ans)) <= n) ++ans;
    cout << ans-1 << endl;
    return 0;
}
