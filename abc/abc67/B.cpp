#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> l(n);
	rep(i, n) cin >> l[i];
	sort(l.begin(), l.end());

	int ans = 0;
	for(int i = 1; i <= k; i++){
		ans += l[n - i];
	}
	printf("%d\n", ans);
	return 0;
}
