#define rrep(i, n) for (int i = (int)(n-1); i >= 0; --i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    scanf("%lld", &n);
    vector<char> ans;
    while (n > 0) {
        n -= 1;
        ans.push_back(n % 26 + 'a');
        n /= 26;
    }
    rrep (i, ans.size()) printf("%c", ans[i]);
    cout << endl;
    return 0;
}
