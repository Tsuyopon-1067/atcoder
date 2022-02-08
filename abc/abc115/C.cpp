#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> h(n);
	rep(i, n) cin >> h[i];
	sort(h.begin(), h.end());

	int ans = 1000000000;
	for(int i = n-1; k-1 <= i; i--){
		ans = min(h[i] - h[i-k+1], ans);
	}
	cout << ans << endl;
	return 0;
}
