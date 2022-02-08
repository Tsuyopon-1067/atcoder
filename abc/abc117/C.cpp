#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> x(m);
	for(int ii = 0; ii < m; ii++) cin >> x[ii];
	sort(x.begin(), x.end());

	vector<int> d(m-1);
	for(int ii = 0; ii < m-1; ii++) d[ii] = x[ii+1] - x[ii];
	sort(d.begin(), d.end());
	
	if(n >= m) {
		cout << 0 << endl;
		return 0;
	}

	int ans = 0;
	rep(i, m-n) ans += d[i];
	cout << ans << endl;
	return 0;
}
