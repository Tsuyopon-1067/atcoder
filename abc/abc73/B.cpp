#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n;
	cin >> n;

	vector<int> l(n);
	vector<int> r(n);
	int ans = 0;
	rep(i, n){
		cin >> l[i] >> r[i];
		ans += r[i] - l[i] + 1;
	}
	cout << ans << endl;

	return 0;
}
