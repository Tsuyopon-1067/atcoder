#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	vector<int> b(n);
	vector<int> c(n);
	for(int ii = 0; ii < n; ii++) cin >> a[ii];
	for(int ii = 0; ii < n; ii++) cin >> b[ii];
	for(int ii = 0; ii < n; ii++) cin >> c[ii];

	vector<int> nk(n);
	sort(a.begin(), a.end());
	rep(i, n) nk[a[i]-1]++;

	long long ans = 0;
	rep(i, n){
		ans += nk[b[c[i]-1]-1];
	}
	cout << ans << endl;
	return 0;
}
