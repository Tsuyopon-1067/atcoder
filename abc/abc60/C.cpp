#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, T;
	cin >> n >> T;
	vector<int> t(n);
	for(int ii = 0; ii < n; ii++) cin >> t[ii];
	int ans = 0;
	rep(i, n-1){
		ans += min(t[i+1] - t[i], T);
	}
	ans += T;
	cout << ans << endl;
	return 0;
}
