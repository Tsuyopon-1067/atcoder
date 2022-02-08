#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for(int ii = 0; ii < n; ii++) cin >> a[ii];

	long long snk = 0;
	long long ary = 0;
	rep(i, n) snk += a[i];

	long long ans = 999999999999999999;
	for(int i = 1; i < n; i++){
		snk -= a[n - i];
		ary += a[n - i];
		ans = min(ans, abs(snk - ary));
	}
	cout << ans << endl;
	return 0;
}
