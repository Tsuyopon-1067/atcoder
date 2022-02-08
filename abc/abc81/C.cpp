#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	for(int ii = 0; ii < n; ii++) cin >> a[ii];
	sort(a.begin(), a.end());

	vector<int> count(n);
	rep(i, n){
		count[a[i]-1]++;
	}
	sort(count.begin(), count.end());

	int ans = 0;
	rep(i, n-k){
		ans += count[i];
	}
	cout << ans << endl;

	return 0;
}
