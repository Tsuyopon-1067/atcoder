#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, m;
	cin >> n >> m;

	int k[30];
	int count[30] = {0};
	for(int ii = 0; ii < n; ii++) {
		cin >> k[ii];
		int temp;
		rep(i, k[ii]) {
			cin >> temp;
			count[temp-1]++;
		}
	}

	int ans = 0;
	rep(i, 30) if(count[i] == n) ans++;
	cout << ans << endl;
	return 0;
}
