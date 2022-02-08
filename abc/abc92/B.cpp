#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, d, x;
	cin >> n >> d >> x;

	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int ans = 0;
	rep(i, n){
		ans += (d-1) / a[i] + 1;
	}
	ans += x;

	cout << ans << endl;
	return 0;
}
