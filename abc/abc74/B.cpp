#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	int k;
	cin >> n;
	cin >> k;
	vector<int> x(n);
	rep(i, n) cin >> x[i];

	int ans = 0;
	rep(i, n) ans += min(abs(x[i]), abs(k-x[i]));
	cout << ans*2 << endl;
	return 0;
}
