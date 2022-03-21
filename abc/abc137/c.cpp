#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<string> s(n);
    map<string, long long> mp;
    for (int i = 0; i < n; ++i) {
        cin >> s[i];
        sort(s[i].begin(), s[i].end());
        ++mp[s[i]];
    }

    long long ans = 0;
    for (auto t : mp) {
        long long ts = t.second;
        ans += ts*(ts-1)/2;
    }
    printf("%lld\n", ans);
    return 0;
}
