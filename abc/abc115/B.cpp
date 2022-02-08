#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> p(n);
	rep(i, n) cin >> p[i];
	sort(p.begin(), p.end());

	int ans = p[n-1]/2;
	rep(i, n-1) ans += p[i];
	cout << ans << endl;
	return 0;
}
