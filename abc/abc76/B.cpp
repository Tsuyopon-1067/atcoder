#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, k;
	cin >> n;
	cin >> k;

	int res = 1;
	rep(i, n) res = min(res*2, res+k);
	cout << res << endl;
	return 0;
}
